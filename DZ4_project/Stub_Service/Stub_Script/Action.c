Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_start_transaction("01_start_Page");

	web_url("192.168.88.19:8090", 
		"URL=http://192.168.88.19:8090/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("01_start_Page",LR_AUTO);

	lr_start_transaction("01_send_JSON");

	web_custom_request("process", 
		"URL=http://192.168.88.19:8090/process", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.88.19:8090/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"qwe\",\"age\":1337}", 
		LAST);

	lr_end_transaction("01_send_JSON",LR_AUTO);

	return 0;
}