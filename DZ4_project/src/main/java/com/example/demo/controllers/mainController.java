package com.example.demo.controllers;

import java.util.concurrent.ThreadLocalRandom;

import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import com.example.demo.models.RequestModel;
import com.example.demo.models.ResponseModel;

import org.springframework.web.bind.annotation.*;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;

import java.util.HashMap;
import java.util.Map;
import java.util.Random;

@Controller
public class mainController {

    @GetMapping("/")
    public String showForm() {
        return "form";
    }

    @PostMapping("/calculate")
    @ResponseBody
    public Map<String, Object> calculateLife(@RequestParam("age") int age) {
        Random random = new Random();

        int yearsLeft = random.nextInt(100 - age + 1);

        int responseTime = random.nextInt(500) + 100;

        Map<String, Object> response = new HashMap<>();
        response.put("yearsLeft", yearsLeft);
        response.put("responseTime", responseTime + "ms");

        return response;
    }
}