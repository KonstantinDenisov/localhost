Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Edge-User-Anid", 
		"5A2B8DB7CDA5D9D9E95088C2FFFFFFFF");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"131.0.2903.146");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiXCJKYmpNeG45UGszQTR1NnBOVnlsM1NhQXRPSndmKzlrMnZzSmR5VDlOeUJ3PVwiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI3NDg2OTA4MDk3NTIwODUyOTciLCI1IjoiXCJLQk1uWXJsd1lldStMYjJFYzBOK0JGdlFkMUkyK0hSM011dERZdDZnVnFrPVwiIiwiNiI6InN0YWJsZSIsIjciOiI4MTE3NDg4MTg5NDUiLCI5IjoiZGVza3RvcCJ9");

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&osver=10.0.22631&devicefamily=desktop&installdate=1694958418&clientversion=131.0.2903.146&experimentationmode=2&scpguard=0&scpfull=0&scpver=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("msa", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"702b023a,a74ddd5e,925773ca,6c715cfb,c1350ab9,3f6a1a2,f95e5542,322c815,1712adcd,a06a8b6a,dee07e4,93277d03,b9047d,fe484d33,7727e674,1baafbd5,d54f5dd3,4e39dc0e,c2f48bc1,76e9a798,59e5636d,cc2ca015,51e941e0\",\"enable_features\":\"ddfd6cd3,d8475dc5,eb6bda0a,27e96171,54acf997,9f28e3fd,1ff9bef0,4cb0a145,6c138508,ab423f01,fbcd420a,f2ce36eb,d20a5ccf,81f32c3b,ab447047,a20d9658,2681f34b,3e592ade,383c38d3,ff2c204,f474932c,2c4eca72,66aaf0d8,c9b1eff3,69bc2e54,c7f02517,508f3c74,"
		"54026607,24b90b43,fc9ed8aa,75b1b341,1207cc22,31eb1075,18a22b0d,3891021f,2c975da3,2373949a,a976f7f5,55a5f854,5cfd95dc,7407dec5,112da081,974a1f21,21714a50,95a29f90,177b250e,a49949fb,9e8c649c,bf8cde40,66f69762,df9dd966,ee446086,4ab9326a,99e16ee6,ff424117,45371e92,12b79225,bf158d94,cc83e0ed,818cc3e5,55b8f41b,4ff83a15,6c603e1e,17fcb4b7,4d578363,f26b1d9f,e28a1926,e2a8ee65,cb46dffb,841beaf9,ace2c02,badd9207,62fd93b7,715909a6,f2462fc7,ac6af412,d29e7da8,792fbf1a,72ca7b98,d56ab6df,43d8ef41,9f497c3b,951654f3"
		",75888302,a1c02b9b,8b8dd9d3,aa5e60d5,451171d4,3faf1b94,6911c10f,2b99039a,d5c4bb55,1c6d05a2,3c59dfce,e02966fa,282948aa,e066252c,609df054,b05c236d,126803bb,8f5ff88b,1c49ec40,50cbb1f,a1d4ae4,67815f60,8b16b1a4,3e1e1ad1,3061cce0,839906b2,8b944d27,15b354,15a8d884,9961d8da,6fce5c2c,d5427798,1dc4660d,e3ce9af1,1d4568d,8fcfcba7,ffdec9de,2894fa9e,7ee22832,9c2a448f,4a5b404,498b0a6,6cafb3d9\",\"filter\":{\"version\":\"131.0.2903.146\"}}", 
		LAST);

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiXCJKYmpNeG45UGszQTR1NnBOVnlsM1NhQXRPSndmKzlrMnZzSmR5VDlOeUJ3PVwiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI3NDg2OTA4MDk3NTIwODUyOTciLCI1IjoiXCJLQk1uWXJsd1lldStMYjJFYzBOK0JGdlFkMUkyK0hSM011dERZdDZnVnFrPVwiIiwiNiI6InN0YWJsZSIsIjciOiI4MTE3NDg4MTg5NDUiLCI5IjoiZGVza3RvcCJ9");

	web_custom_request("rewardsUserInfo", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"IncludePromotions\":false,\"anid\":\"5A2B8DB7CDA5D9D9E95088C2FFFFFFFF\",\"channel\":\"\"}", 
		LAST);

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"dY+wZVvKmNh5T/1XL0OGVM");

	web_add_header("Update-Interactivity", 
		"bg");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=131.0.2903.146&lang=ru&acceptformat=crx3,puff&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.2.1%26installedby%3Dother%26uc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiXCJKYmpNeG45UGszQTR1NnBOVnlsM1NhQXRPSndmKzlrMnZzSmR5VDlOeUJ3PVwiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI3NDg2OTA4MDk3NTIwODUyOTciLCI1IjoiXCJLQk1uWXJsd1lldStMYjJFYzBOK0JGdlFkMUkyK0hSM011dERZdDZnVnFrPVwiIiwiNiI6InN0YWJsZSIsIjciOiI4MTE3NDg4MTg5NDUiLCI5IjoiZGVza3RvcCJ9");

	web_custom_request("rewardsUserInfo_2", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"IncludePromotions\":false,\"anid\":\"5A2B8DB7CDA5D9D9E95088C2FFFFFFFF\",\"channel\":\"\"}", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("X-Search-RPSToken", 
		"t=EwDYAqyMBAAUWkziSC7RbDJKS1VkhugDegv7L0eAAGmUUQsISDf6ggIvH8uT+ewBulJ+Tvr4yyRBFxQPcqbvVdwPM/9RcW43SWAgwafpCROZ6BH+eE6aqF0aAuy9cKHkc1yf5w8hu/Jgk4A7aCeikiQAriay1ZDKUApSF2KVywskOI8XR5IKyOQxnXI4v7+NlqaDyeRGCX4Q1cJLaIalEGYAABDsoUO+uqAVjEJ/HzEaOOViIAJZJalYMLhH/7NdaSEOiAG5nZdxG1LHePzK3neSnTXLdpPUO5TIKMDoaz2L8KW0Z55xHe6nKniDbImgwgdXk3LgQRLrH3CdGaq6wL4Sf97RR4gUxXKSO10/4uNTkdTokl9ow+xeC3OddhanrvBE66I6zOF6tRErW/KSzkXKS2cz2yuM1mnSFgB8xmEDkXbsmYks3OtPUkknbnLKH/txBDgOxwnrUti2cIHA6lDs2ePQnvPkxvp+"
		"YtKaSHXW9FmK7nIyCUftJUiUfYFqoWRcOLdw+50LKEiWEJqYdzIW9Y5w1Ml/o7gPYgQCLbn7EIbj/k1s1D6UdjfGvWslBB871YZdr5hyDSKwp3ARsZ9FWYMLqAam0ZuJEGvV+mODjTS2+btKpG8ChWvy5rKAyNwzxKg4QBNnGCuGl5/CHd6pccHm7w4YDAPis0A3QLkRGQA85+j+yuNS7p2mrUA/uQAf2RC+DW6XQyr99Gk3YEyv6ubWBu3EAaOZUjBWlaoGkcMUPKRXR7H+ESdRnG3yvuB6FSEcjO/G8QeFr7HxdMvSjnZxoGiiZkM8c5fPPrkbY4kLCX+7bvPA3vI4RXeM01in6RYS4kpe3XM8y3wsQd434Oi/ne5GtShaD07rdvkWsPgVCY4h+PwWQdyOgYvl8GtvqFUb2QxDx8vz116InnNuKolXJFc/lYg41oaiqYIKKbhKq/6b4AD+pHOiHBW+JzZC4sHsVQI=&p=");

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"131.0.2903.146");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("signin", 
		"URL=https://copilot.microsoft.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Search-RPSToken", 
		"t=EwDYAgALBAAUWkziSC7RbDJKS1VkhugDegv7L0eAAHlaJxhXKeaiRgp8vYaPzedJhieD+H6R14vkFeUksyImW2W4l5jgdrJbB43Gf0aRxQ9N4vrnnCiA2NqIrv9d1yw9m5x54Eno5aWWk72e5lIfHtcjrS7sXvFKopDWpJe37vfAIp3T8H4wM946IfggXmdFKXUAFCbLSnLSHhMsEA06EGYAABAmFLXlmlIfBH/qgNVRLiJHIAJafQd9RvwpZHbeyofS80lnMCn4kkrgghK9JU2ev7bDKqIMRu8qVopSLZroQmuMVi+MBfgmmPXVE9tTlxVi2l9n4RmZBsG2ZAhOpjGktUYttyz/wKFAQ2Vkf0aO32dt+9dKOAUJHITq6GHsRsS2/AzO8eRjHi10iWEI1YJ9QCVIHDOs15v8rXPIReo7jJxHUwWNvzvqBCohJdknnmPIXWVZZLJiUc/"
		"vfxwfZZ1EUsc7UO2zVfe6394T55qcXpq2N6OQuF6UgGGqm3dpZ6aOaXMXTLy3gbq+KzOYOfwqsON3he4MG1oVPnDluZ2UH14SFHW+7asJazttliO5r/OxK1WLBv1TeXMecE5lxyF2QrmPgAibKOvZArURc2W7aek1oq/wvYPwnSz1VRhyrMecZL7hRGBkpfIfy7ex7liJczP8siJ/Y33AGxhZfYtPZt+7Fr/I7x/e3czWQfR98I7eLfuh4D2ZXQSAcwQiMDAQR5Nq31EXyBet57yDn2dQKrgL6OHio3l9fap3/xXjoIRtxxaY4f0trux/cv8Y3HQbWhMTnSJwYAkVLRlSUp+f1WF0LlkMqfu6H9PGeedI4+DJviI8eWGhdLI57ePMcb4qZ9OICry8OgCES/Bu5Wjljkmsonjs8LxkUFKc6P5qtJ0jmNoYjCdtOAt8HkvPjFnOQI/ff9M8KqZXxZslWlto+7TFqnvogT8tVLye6nn/"
		"DQ7wUUO1VQI=&p=");

	web_url("signin_2", 
		"URL=https://www.bing.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_url("shoppingsettings", 
		"URL=https://www.bing.com/api/shopping/v1/user/shoppingsettings", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"131.0.2903.146");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("blocklist", 
		"URL=https://edge.microsoft.com/abusiveadblocking/api/v1/blocklist", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiXCJKYmpNeG45UGszQTR1NnBOVnlsM1NhQXRPSndmKzlrMnZzSmR5VDlOeUJ3PVwiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI3NDg2OTA4MDk3NTIwODUyOTciLCI1IjoiXCJLQk1uWXJsd1lldStMYjJFYzBOK0JGdlFkMUkyK0hSM011dERZdDZnVnFrPVwiIiwiNiI6InN0YWJsZSIsIjciOiI4MTE3NDg4MTg5NDUiLCI5IjoiZGVza3RvcCJ9");

	web_url("shoppingsettings_2", 
		"URL=https://www.bing.com/api/shopping/v1/user/shoppingsettings", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-AnchorMailbox", 
		"CID:f070a191a34bd5e7");

	web_url("V1Profile", 
		"URL=https://substrate.office.com/profileb2/v2.0/me/V1Profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-AFS-CV", 
		"AP1iVqQt1j0Qn4d6faNkTN");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22631; app=Microsoft Edge; appVer=131.0.2903.146; appChannel=stable; appInstallationId=748690809752085297; region=RU;");

	web_add_header("X-Client-Data", 
		"CI2HywE=");

	lr_think_time(10);

	web_custom_request("command", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=iM%2BDiC14xNRRu2K6XGGa2w%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t75.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18iM+DiC14xNRRu2K6XGGa2w==\\x10c\\x18\\x02*\\xED\\x04\\x12\\x02\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08\\xB1\\xFFN\\xF4\\x93\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC7\\x87\\x03\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9A\\xB7\t\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC9\\x8B)\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xD0\\xAF:\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA9\\xF0O\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xBFG\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB5\\xDAD\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08\\xBFf*k\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x060\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:-ProductionEnvironmentDefinition_1662295566635RJ\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00(\\x88\\x81\\x02(\\xC6\\xA6\\x02(\\xB1\\xE6\\x02(\\xCD\\xBE\\x02(\\xF7\\xF7\\x02(\\x9F\\xEF\\x05(\\xEB\\x95\t(\\xFC\\xDE$(\\xC9\\x8B)(\\xA1\\xDD'(\\xD0\\xAF:(\\xF1\\xBFG(\\xB5\\xDAD(\\x81\\xF5\\x02Z\\x00b\ndummytokenj\\x02\\x10\\x01r\\x1Cchr:iM+DiC14xNRRu2K6XGGa2w==", 
		LAST);

	web_url("regionalAndLanguageSettings", 
		"URL=https://graph.microsoft.com/beta/me/settings/regionalAndLanguageSettings", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(12);

	web_url("config.json", 
		"URL=https://edge-consumer-static.azureedge.net/mouse-gesture/config.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(29);

	web_custom_request("cloud_config_observers.json", 
		"URL=https://static.edge.microsoftapp.net/default/cloud_config_observers.json", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"131.0.2903.146");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Microsoft-Update-AppId", 
		"eeobbhfgfagbclfofmgbdfoicabjdbkn,oankkpibpaokgecfckkdkgaoafllipag,pghocgajpebopihickglahgebcmkcekh,kpfehajjjbbcifeehjgfgnabifknmdad,ohckeflnhegojcjlcpbfpciadgikcohk,ndikpojcjlepofdkaaldkinkjbeeebkl,fppmbhmldokgmleojlplaaodlkibgikh,fgbafbciocncjfbbonhocjaohoknlaco,ahmaebgpfccdhgidjaidaoojjcijckba,alpjnmnfbgfkmmpcfpejmmoebdndedno,pbdgbpmpeenomngainidcjmopnklimmf,mpicjakjneaggahlnmbojhjpnileolnb,kmkacjgmmfchkbeglfbjjeidfckbnkca,ebkkldgijmkljgglkajkjgedfnigiakk,lkkdlcloifjinapabfonaibjijloebfb,"
		"mkcgfaeepibomfapiapjaceihcojnphg,plbmmhnabegcabfbcejohgjpkamkddhn,llmidpclgepbgbgoecnhcmgfhmfplfao,omnckhpgfmaoelhddliebabpgblmmnjp,jcmcegpcehdchljeldgmmfbgcpnmgedo,lfmeghnikdkbonehgjihjebgioakijgn,cllppcmmlnkggcmljjfigkcigaajjmid,hjaimielcgmceiphgjjfddlgjklfpdei,ojblfafjmiikbkepnnolpgbbhejhlcim,jbfaflocpnkhbgcijpkiafdpbjkedane,oghefchejbbgepkneeedmklffjpbaiaa,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_auto_header("X-Microsoft-Update-Service-Cohort", 
		"358");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-131.0.2903.146");

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=7:PjXRWsNFltyOMp1uyhkTWwbJBnGQdQsowrpB_BnP2DY&cup2hreq=1c3482d19436d32674735ba0058113a5818e43e133742dbc93388aaa7ea2dac0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.63\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.63\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.63,\"AppVersion\":\"131.0.2903.146\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.26\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1AB07E887ACCA305058EEAB9053C96DC531C2C5C067AB4F30AFA2B31F1EDD966\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.26\",\"AppMajorVersion\":\"131\",\""
		"AppRollout\":0.26,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"6498.2024.12.2\"},{\"appid\":\"pghocgajpebopihickglahgebcmkcekh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8DAA3547317E62E7E02DA356F9540C329689C49350ACF8A30088320C805E74ED\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{"
		"\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.72,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"3.0.0.8\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.22\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.00AF3F07B5ABB71F6D30337E1EEF62FA280F06EF19485C0CF6B72171F92CCC0A\""
		"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.22\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.22,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.53\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.95FD9D48E4FC245A3F3A99A3A16ECD1355050BA3F4AFC555F19A97C7F9B49677\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.53\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.53,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"0.0.1.7\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.50\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.69D0D51AD8D1AABAAE811B5BC6F72729BEEBE8AB40C8E6080C8255453F913377\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.50\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.5,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"10.34.0.57\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\""
		":\"rrf@0.97\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.97\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.97,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\""
		"fgbafbciocncjfbbonhocjaohoknlaco\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.09\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.2EE0FD95211580C591EEB5DF8280DB42AA00166AB03A919A3748BD857A42EA75\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.09\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.09,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\""
		"updatecheck\":{},\"version\":\"2024.12.14.1\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.24\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.24\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.24,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\""
		"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.30\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.43E8C0B08588B853D635D07716B7D49C7155FF91CC736D566AE3CD99A809874D\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.30\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.3,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\""
		"updatecheck\":{},\"version\":\"21.0.0.0\"},{\"appid\":\"pbdgbpmpeenomngainidcjmopnklimmf\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.60\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.B27BEC7581505715364F132DE1998818C82462DBF55A1F55F9B15E29E988D791\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.60\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.6,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater"
		"\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"0.0.0.46\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.37\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.D0760C8DC53D9AC78138D8BB36E76A885A94363E33058BC33FB4E03162A2492C\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.37\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.37,\"AppVersion\":\"131.0.2903.146\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"4.0.0.19\"},{\"appid\":\"kmkacjgmmfchkbeglfbjjeidfckbnkca\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.77\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.4A84F2BDD63DABE6ABDE22B9047A6942EEB7BDF93D8435CC4B188DBE72D9E30D\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.77\",\"AppMajorVersion\":\"131\",\""
		"AppRollout\":0.77,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2.0.0.0\"},{\"appid\":\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.27\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\""
		"AppCohort\":\"rrf@0.27\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.27,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.58\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.CB0C8B4D212BCD4A741F0625FAC3968E0559EDFD37DD0760C5270662868F373A\"}"
		"]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.58\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.58,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"4.0.3.7\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.62\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort"
		"\":\"rrf@0.62\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.62,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.42\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1E1174204F8A0A13DE2E224A1BE882D2724A6FD13BA18A895FD5098FD5552460\"}]},\"ping"
		"\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.42\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.42,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"3057\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.52\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.1CFA0A98082E573ECFE99DECF7A7122C5CA3575EECA089BF9C3A2A2D2D315032\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.52\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.52,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2.0.8022.0\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.51\",\"enabled\":true,\"installdate\":-1,"
		"\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.51\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.51,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\""
		":\"rrf@0.96\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.2C72334256F1AC0963A5999AC290B2DFC84E1BF124D8F3E586B3C18E5BD102E6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.96\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.96,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2025.1.15.2\"},{\"appid\":\""
		"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.62\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8D0A42A37A981A46B00865EF11F43AB0AC84B248E015FB228D88A7D7B511AEBA\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.62\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.62,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\""
		"updatecheck\":{},\"version\":\"2.0.0.19\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.80\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.CE938071B72D256D4C99A58BB6786778540C0AD813ED8B88F68967CE78564254\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.80\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.8,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater"
		"\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"128.18275.18267.5\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.87\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.87\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.87,\"AppVersion\":\""
		"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.47\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.47,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false"
		",\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"4.10.2830.0\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.72,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\""
		"},\"updatecheck\":{},\"version\":\"1.0.0.26\"},{\"appid\":\"oghefchejbbgepkneeedmklffjpbaiaa\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.04\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.5F87F608850995E52E0F1477DC78087CACBD6560E9DA289237CF2EB745EB3944\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.04\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.04,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.19.2.0\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.45\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.45\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.45,\"AppVersion\":\""
		"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2024.8.10.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4602\"},\"prodversion\":\"131.0.2903.146\",\"protocol"
		"\":\"3.1\",\"requestid\":\"{a6d027cb-8e06-4a28-95ee-ea485538c531}\",\"sessionid\":\"{feec3710-e628-49dd-8153-5d05c9b8f27b}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.195.43\"},\"updaterversion\":\"131.0.2903.146\"}}", 
		EXTRARES, 
		"Url=/neededge/v1?bucket=69", "Referer=", ENDITEM, 
		"Url=http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/2ed1297e-f6c9-4355-aec4-433ea371b116?P1=1737535591&P2=404&P3=2&P4=KOmG4C2YSMckFy3uFmoR%2b8pMYpCi%2bEzDD3ERe9EJSuRYd0bXkh1N0zKJzwTyIRsL87ylWlf%2b0nw9oRKHQCb5uQ%3d%3d", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.37\",\"enabled\":true,\"event\":[{\"download_time_ms\":28381,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":-2145386477,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"4.0.1.10\",\"previousversion\":\"4.0.0.19\",\"total\":67802,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/"
		"files/2ed1297e-f6c9-4355-aec4-433ea371b116?P1=1737535591&P2=404&P3=2&P4=KOmG4C2YSMckFy3uFmoR%2b8pMYpCi%2bEzDD3ERe9EJSuRYd0bXkh1N0zKJzwTyIRsL87ylWlf%2b0nw9oRKHQCb5uQ%3d%3d\"},{\"download_time_ms\":249,\"downloaded\":67802,\"downloader\":\"direct\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"4.0.1.10\",\"previousversion\":\"4.0.0.19\",\"total\":67802,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/2ed1297e-f6c9-4355-aec4-433ea371b116?P1=1737535591&P2="
		"404&P3=2&P4=KOmG4C2YSMckFy3uFmoR%2b8pMYpCi%2bEzDD3ERe9EJSuRYd0bXkh1N0zKJzwTyIRsL87ylWlf%2b0nw9oRKHQCb5uQ%3d%3d\"},{\"errorcat\":3,\"errorcode\":16,\"eventresult\":0,\"eventtype\":3,\"install_time_ms\":33,\"nextfp\":\"1.585DE38D235AE02DB9B82F20B88251C2B1DD4CD3B0037A7709640F0C3D20BA9C\",\"nextversion\":\"4.0.1.10\",\"previousfp\":\"1.D0760C8DC53D9AC78138D8BB36E76A885A94363E33058BC33FB4E03162A2492C\",\"previousversion\":\"4.0.0.19\"}],\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\""
		"fp\":\"1.D0760C8DC53D9AC78138D8BB36E76A885A94363E33058BC33FB4E03162A2492C\"}]},\"version\":\"4.0.0.19\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4602\"},\"prodversion\":\"131.0.2903.146\",\"protocol\":\"3.1\",\"requestid\":\""
		"{fbb2d79d-61e9-4730-b81c-1e960538bf94}\",\"sessionid\":\"{feec3710-e628-49dd-8153-5d05c9b8f27b}\",\"updaterversion\":\"131.0.2903.146\"}}", 
		LAST);

	lr_think_time(8);

	web_custom_request("update_3", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.45\",\"enabled\":true,\"event\":[{\"download_time_ms\":8042,\"downloaded\":6252,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.11.8.0\",\"previousversion\":\"2024.8.10.0\",\"total\":6252,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"2a0d597c-a09c-4400-be86-87596dd2e696?P1=1737535591&P2=404&P3=2&P4=Z5WobU5%2fjbkQgQ8RlaIV15KHkghntsFbBuGxOhoZgrFHLUjmG8FaoeZrNwCn3%2bNHAx%2b%2f0HWFGgrhIET%2fH%2fSugA%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":33,\"nextfp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\",\"nextversion\":\"2024.11.8.0\",\"previousfp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\",\"previousversion\":\"2024.8.10.0\"}],\"installdate\":-1,\"lang\":\""
		"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\"}]},\"version\":\"2024.11.8.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4602\"},\"prodversion\":\"131.0.2903.146\",\"protocol\":\"3.1\",\"requestid\""
		":\"{7d1e1b93-bae8-4139-844f-1c5b6ca526ae}\",\"sessionid\":\"{feec3710-e628-49dd-8153-5d05c9b8f27b}\",\"updaterversion\":\"131.0.2903.146\"}}", 
		LAST);

	lr_start_transaction("01_start_Page");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_revert_auto_header("X-Microsoft-Update-Service-Cohort");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(116);

	web_url("192.168.88.19:8090", 
		"URL=http://192.168.88.19:8090/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36 Edg/131.0.0.0\",\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":\"c0677400-cd1a-4c11-a565-7b1c9b902a84\",\"onlineIdTicket\":\"t=GwAWAd9tBAAUanPXNspPGlCQJmFge+"
		"TK6U86WWUOZgAAEMARQZJ94GRuW0b1FhM39dTgABi168Mw3yY3r3LPtW3jO2eXWhdMfAhdYfJyXo0r4Tg7yyyOksXCfySyusEWhanM4zT8bO6vThLREut70QVBM7XeenLaLjNKVR23GurPPYejU2XRFlDAO2YrrxC2K00VIOZG4xFGoaj3D/ewdCAyMcL7E06uXg/DBoOBIdLlIW/3tW9wImzcGQVym2qik83bVdVKxXzpuUvJeNT3oIcTQ59/qXGQFcyAWGNPzdJWOusP2zowbers5mFb3al+V5Cd+9jaZUY2jXkV0hKzQ1AgL6dvkF7qZ5BfWX3b0o3u9+ZeHgE=&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.22631.4602.ni_release\",\"browser\":{\"internetExplorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\""
		"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\"131.0.2903.146 (Official build) \"},\"client\":{\"version\":\"281483724587008\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\""
		"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://192.168.88.19:8090/\",\"ip\":\"192.168.88.19\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"555379a4-6468-4b20-900d-6538e12a832d\",\"synchronous\":false}", 
		LAST);

	web_url("601694298069630567", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-8295324608025126907/601694298069630567", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ExpandedDomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/ExpandedDomainsFilterGlobal.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://edge.microsoft.com/extensionrevocation/v1/threatListUpdates_fetch?req=ChgKBm1zZWRnZRIOMTMxLjAuMjkwMy4xNDYaGwgBEAgaDTE3MzY4OTI3NjcxMTgiBCABIAIoBCICCAE=&ct=application/x-protobuf&key=d414dd4f9db345fa8003e32adc81b362", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("01_start_Page",LR_AUTO);

	lr_start_transaction("01_send_JSON");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Origin", 
		"http://192.168.88.19:8090");

	lr_think_time(6);

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