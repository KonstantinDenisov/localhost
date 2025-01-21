Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

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

	web_custom_request("msa", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"702b023a,a74ddd5e,925773ca,6c715cfb,c1350ab9,3f6a1a2,f95e5542,322c815,1712adcd,a06a8b6a,dee07e4,93277d03,b9047d,fe484d33,7727e674,1baafbd5,d54f5dd3,4e39dc0e,c2f48bc1,76e9a798,59e5636d,cc2ca015,394bc2e0,51e941e0\",\"enable_features\":\"ddfd6cd3,d8475dc5,eb6bda0a,27e96171,54acf997,9f28e3fd,1ff9bef0,4cb0a145,6c138508,ab423f01,fbcd420a,f2ce36eb,d20a5ccf,81f32c3b,ab447047,a20d9658,2681f34b,3e592ade,383c38d3,ff2c204,f474932c,2c4eca72,66aaf0d8,c9b1eff3,69bc2e54,c7f02517,"
		"508f3c74,54026607,24b90b43,fc9ed8aa,75b1b341,1207cc22,31eb1075,18a22b0d,3891021f,2c975da3,2373949a,a976f7f5,55a5f854,5cfd95dc,7407dec5,112da081,974a1f21,21714a50,95a29f90,177b250e,a49949fb,9e8c649c,bf8cde40,66f69762,df9dd966,ee446086,4ab9326a,99e16ee6,ff424117,45371e92,12b79225,bf158d94,cc83e0ed,818cc3e5,55b8f41b,4ff83a15,6c603e1e,17fcb4b7,4d578363,f26b1d9f,e28a1926,e2a8ee65,cb46dffb,841beaf9,ace2c02,badd9207,62fd93b7,715909a6,f2462fc7,ac6af412,d29e7da8,792fbf1a,43d8ef41,9f497c3b,951654f3,75888302"
		",a1c02b9b,8b8dd9d3,aa5e60d5,451171d4,3faf1b94,6911c10f,2b99039a,d5c4bb55,1c6d05a2,3c59dfce,e02966fa,282948aa,e066252c,609df054,b05c236d,126803bb,8f5ff88b,1c49ec40,4e3efdf6,50cbb1f,a1d4ae4,67815f60,8b16b1a4,3e1e1ad1,3061cce0,839906b2,8b944d27,15b354,15a8d884,9961d8da,6fce5c2c,d5427798,1dc4660d,e3ce9af1,1d4568d,8fcfcba7,ffdec9de,2894fa9e,7ee22832,9c2a448f,4a5b404,e7926102,498b0a6,6cafb3d9\",\"filter\":{\"version\":\"131.0.2903.146\"}}", 
		LAST);

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiXCJKYmpNeG45UGszQTR1NnBOVnlsM1NhQXRPSndmKzlrMnZzSmR5VDlOeUJ3PVwiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI3NDg2OTA4MDk3NTIwODUyOTciLCI1IjoiXCJVZXhQdVFTNy9ONThwTkRSNGl5SkZtSnZKcDJ5OVcwOWI1cERDZUxmTExRPVwiIiwiNiI6InN0YWJsZSIsIjciOiI4Mjg5Mjg2ODgxMjkiLCI5IjoiZGVza3RvcCJ9");

	web_custom_request("rewardsUserInfo", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"IncludePromotions\":false,\"anid\":\"5A2B8DB7CDA5D9D9E95088C2FFFFFFFF\",\"channel\":\"\"}", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

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

	web_add_header("X-Search-RPSToken", 
		"t=EwDYAgALBAAUWkziSC7RbDJKS1VkhugDegv7L0eAAJ1UULHo0I2wlUQpPSsgHkR8XsPOzxQenGQhxBnVoJr3Qt0uFQPkACfxA/LcWOM43optN0p+hyqyTE99HVvd7Y4piWwLO7uCLLbHnGShQFndW7Blw0rU5Ys2hoZ/2+F2FN/dxIDbMbzvzqtzFHYMvffXEdK6joJCfxGdMxPhN3mMEGYAABDB9XeYv9+AJP3DeYQDyuoOIAJyGMwNE3Vj1go6IH/7WUZC3Nj0qk/mbVn5TM5rcmcxq/0Dzg0yAfiF7baUt22ZbZv1qcF5LOqjZFXQoOQM6qbgQQU2SzEb7PhLOGzZK5gOHPOAPxAaItJL5a3Xj/XTTcDMWs6Xs2qzhX73UU4DRcbtXmr6GFZDFfboWaoRrsTOBrTueqhdpzGyzz0FisqB2vqGxaZ9sHKrGOqIfJJ/e/S41bLsKslxnS1mfqw3DLujn+KWKNpar1mU2hamxVTT3IM/"
		"gqgCjW7cVGFk5aSLqPXvaduatw0kA3mtobbnQCTEjaVM6CduAMFll1KQ1BPSZcyqgg3yiAmUPF8Qay2mhec2gkOlhpzmZhYsusGk+3WFGoOvmcC9RyjVhPsgEiqLl5DDJX2aNsKOtojatxYFezwx5gYyl4G5Ai5jw9N6UFSfCFVhE90OcsIIkMvDnnTBRrgzt9qU/hNj2ZYoD9Lxc6r1Ln+csqeiHRaBXI6XWVq7AXBpoWD+KomD8z/kkNRW6Ey81f3Bzvm1WBQxiF4efG+48z/aZiocNNKR558I+3RJHLMCcTbWGk1Dr/tCC4zVcG1rGzgax/iK9KX6tlwIu3V09zrNlWqInyibOmCTdoKdxLTNoCIDlxTa25l7dfSSnP5j6Yct9qQrqUeoD86FNhCad0n3gqmMI3h0RDe/EoI26/ZtARNd6dy8no1ZosCqCuZuYNVEmAp2jdyCKPc0gB13VQI=&p=");

	web_url("signin", 
		"URL=https://www.bing.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"s2Q+tHGRDGxIIoDboGYgq5");

	web_add_header("Update-Interactivity", 
		"bg");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=131.0.2903.146&lang=ru&acceptformat=crx3,puff&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.2.1%26installedby%3Dother%26uc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t4.inf", 
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

	web_add_header("X-Search-RPSToken", 
		"t=EwDYAqyMBAAUWkziSC7RbDJKS1VkhugDegv7L0eAAEwX1HiHI5YPEMQ3YveKf4uXkWSnzvc2+TQ+E+fLk+wVQfPmH9DxRKNDs1C0OZk+eb7HR+n8Qt8gP5Xf7fHGC42/GzAc2tnlVXlOOIkxrfugQvfpPw8NkGwWuJz8jAgovteltK0NO0HGStXKwC3bDm8b7I95K692kn6RZsJXcxseEGYAABAYG2M/KDH5438wHCvhDFGCIAKbgM4ZyKFO2LMdB44Q9DO/jrDZBkPi8u4JmAMyn9Mn0TSuoqebfS7ILDq14v8LkEfGhL6iK0WMlqEG0RtPE7lWXBeEGL9pqcdWRroSlyDbq3Vy/lEpXeTwJxlzaRPt9ZokEatmjmXc/EHEmQ00GF/"
		"lfTVqPnKY81p1xjP1KlLdHkow0ZsoC1Fgm9fUblLtZ59SzQEDpKDiC73wdxStNMqjhet0KgtJQApvMdzIJrLt15n50QioSLInmDO8ahw2xLl25TnZMpxZ8rrQWdPpeDSI8JlMBtEj6KvJw+NAGiGaUpREIVmhxS9njSncYGtrtRy9s4KJv14bAIrnWGQPyGcPFWqQNX2Wv6MhRHhg9Z/UtYA2SCAFZpVyhcfxSXUtTPARu2ZcKnxxuyQNVhjDx6xeXhEp8+kgGUa0C2BCA0jJaVBUCAn2OgEbkwYtNL6l2+05ElW844TRBeA1YjBEsc0Zdbi1mW5nHitK0IKpGn505VcSS+rpFbCoB+1UMCqFFNtguLahNuVyc9VE6b8YCM8abv881S7AdjQEYc3s/4CvWIEJ5rld4s2EomiRYAGxWN5RuBvCAumuHvzhxKEw2+"
		"lUy3xjEjfIUzrpWenaJ32oJeATCPf2umvRhINfEClaZMr1048M4dLR9qSR3VLahIWV8inUoEj8c6vQ/JVSYMjciZllOlBI0N+cWwnOt1eeEpUiWlA5iNkQ4dn9A3Svcs+pVQI=&p=");

	web_url("signin_2", 
		"URL=https://copilot.microsoft.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingsettings", 
		"URL=https://www.bing.com/api/shopping/v1/user/shoppingsettings", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiXCJKYmpNeG45UGszQTR1NnBOVnlsM1NhQXRPSndmKzlrMnZzSmR5VDlOeUJ3PVwiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI3NDg2OTA4MDk3NTIwODUyOTciLCI1IjoiXCJVZXhQdVFTNy9ONThwTkRSNGl5SkZtSnZKcDJ5OVcwOWI1cERDZUxmTExRPVwiIiwiNiI6InN0YWJsZSIsIjciOiI4Mjg5Mjg2ODgxMjkiLCI5IjoiZGVza3RvcCJ9");

	web_custom_request("rewardsUserInfo_2", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"IncludePromotions\":false,\"anid\":\"5A2B8DB7CDA5D9D9E95088C2FFFFFFFF\",\"channel\":\"\"}", 
		LAST);

	web_url("shoppingsettings_2", 
		"URL=https://www.bing.com/api/shopping/v1/user/shoppingsettings", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Client-Data");

	web_add_header("X-AnchorMailbox", 
		"CID:f070a191a34bd5e7");

	web_url("V1Profile", 
		"URL=https://substrate.office.com/profileb2/v2.0/me/V1Profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
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
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-AFS-CV", 
		"gniWdxzdPKDfcA6YMJWDHJ");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22631; app=Microsoft Edge; appVer=131.0.2903.146; appChannel=stable; appInstallationId=748690809752085297; region=RU;");

	web_add_header("X-Client-Data", 
		"CI2HywE=");

	lr_think_time(5);

	web_custom_request("command", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=iM%2BDiC14xNRRu2K6XGGa2w%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18iM+DiC14xNRRu2K6XGGa2w==\\x10c\\x18\\x02*\\xED\\x04\\x12\\x02\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08\\xB1\\xFFN\\xF4\\x93\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08\\xAF\\xCE"
		"{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC7\\x87\\x03\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9A\\xB7\t"
		"\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC9\\x8B)\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xD0\\xAF"
		":\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA9\\xF0O\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xBFG\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB5\\xDAD\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08\\xAF\\xCE{\\x89\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x060\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:-ProductionEnvironmentDefinition_1662295566635RJ\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00(\\x88\\x81\\x02(\\xC6\\xA6\\x02(\\xB1\\xE6\\x02(\\xCD\\xBE\\x02(\\xF7\\xF7\\x02(\\x9F\\xEF\\x05(\\xEB\\x95\t(\\xFC\\xDE$(\\xC9\\x8B)(\\xA1\\xDD'(\\xD0\\xAF:(\\xF1\\xBFG(\\xB5\\xDAD(\\x81\\xF5\\x02Z\\x00b\n"
		"dummytokenj\\x02\\x10\\x01r\\x1Cchr:iM+DiC14xNRRu2K6XGGa2w==", 
		LAST);

	web_url("regionalAndLanguageSettings", 
		"URL=https://graph.microsoft.com/beta/me/settings/regionalAndLanguageSettings", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(17);

	web_url("config.json", 
		"URL=https://edge-consumer-static.azureedge.net/mouse-gesture/config.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(30);

	web_custom_request("cloud_config_observers.json", 
		"URL=https://static.edge.microsoftapp.net/default/cloud_config_observers.json", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cloud_config_observers.json_2", 
		"URL=https://static.edge.microsoftapp.net/default/cloud_config_observers.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
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

	web_add_header("X-Microsoft-Update-AppId", 
		"oankkpibpaokgecfckkdkgaoafllipag,eeobbhfgfagbclfofmgbdfoicabjdbkn,pghocgajpebopihickglahgebcmkcekh,fppmbhmldokgmleojlplaaodlkibgikh,kpfehajjjbbcifeehjgfgnabifknmdad,ndikpojcjlepofdkaaldkinkjbeeebkl,ohckeflnhegojcjlcpbfpciadgikcohk,ahmaebgpfccdhgidjaidaoojjcijckba,ojblfafjmiikbkepnnolpgbbhejhlcim,alpjnmnfbgfkmmpcfpejmmoebdndedno,mkcgfaeepibomfapiapjaceihcojnphg,ebkkldgijmkljgglkajkjgedfnigiakk,kmkacjgmmfchkbeglfbjjeidfckbnkca,pbdgbpmpeenomngainidcjmopnklimmf,lkkdlcloifjinapabfonaibjijloebfb,"
		"mpicjakjneaggahlnmbojhjpnileolnb,jbfaflocpnkhbgcijpkiafdpbjkedane,fgbafbciocncjfbbonhocjaohoknlaco,plbmmhnabegcabfbcejohgjpkamkddhn,omnckhpgfmaoelhddliebabpgblmmnjp,jcmcegpcehdchljeldgmmfbgcpnmgedo,llmidpclgepbgbgoecnhcmgfhmfplfao,lfmeghnikdkbonehgjihjebgioakijgn,hjaimielcgmceiphgjjfddlgjklfpdei,cllppcmmlnkggcmljjfigkcigaajjmid,oghefchejbbgepkneeedmklffjpbaiaa,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"6223");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-131.0.2903.146");

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=7:1_oDeBjLuviC_E24wc0Ry7B6p445R-tIHv2qngOUzos&cup2hreq=a8b0868bc434c0ca56ecef8e3ee9b5d00ffa72221216c83016a4aaba079afafc", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.26\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1AB07E887ACCA305058EEAB9053C96DC531C2C5C067AB4F30AFA2B31F1EDD966\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.26\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.26,\"AppVersion\":\"131.0.2903.146\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"6498.2024.12.2\"},{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.63\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.63\",\"AppMajorVersion\":\"131\","
		"\"AppRollout\":0.63,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"pghocgajpebopihickglahgebcmkcekh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8DAA3547317E62E7E02DA356F9540C329689C49350ACF8A30088320C805E74ED\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\""
		"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.72,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"3.0.0.8\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.97\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]"
		"},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.97\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.97,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.22\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.00AF3F07B5ABB71F6D30337E1EEF62FA280F06EF19485C0CF6B72171F92CCC0A\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.22\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.22,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.50\",\"enabled\":true,\"installdate\":-1"
		",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.69D0D51AD8D1AABAAE811B5BC6F72729BEEBE8AB40C8E6080C8255453F913377\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.50\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.5,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"10.34.0.57\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.53\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.95FD9D48E4FC245A3F3A99A3A16ECD1355050BA3F4AFC555F19A97C7F9B49677\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.53\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.53,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"0.0.1.7\"},{\"appid\":\""
		"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.24\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.24\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.24,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.47\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.47,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"4.10.2830.0\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.30\",\"enabled\":true,\"installdate\""
		":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.43E8C0B08588B853D635D07716B7D49C7155FF91CC736D566AE3CD99A809874D\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.30\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.3,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"21.0.0.0\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.62\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.62\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.62,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.27\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.27\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.27,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\"kmkacjgmmfchkbeglfbjjeidfckbnkca\",\"brand\":\"INBX\",\"cohort\":"
		"\"rrf@0.77\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.4A84F2BDD63DABE6ABDE22B9047A6942EEB7BDF93D8435CC4B188DBE72D9E30D\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.77\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.77,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2.0.0.0\"},{\"appid\":\""
		"pbdgbpmpeenomngainidcjmopnklimmf\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.60\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.B27BEC7581505715364F132DE1998818C82462DBF55A1F55F9B15E29E988D791\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.60\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.6,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\""
		"updatecheck\":{},\"version\":\"0.0.0.46\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.58\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.CB0C8B4D212BCD4A741F0625FAC3968E0559EDFD37DD0760C5270662868F373A\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.58\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.58,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"4.0.3.7\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.37\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.D0760C8DC53D9AC78138D8BB36E76A885A94363E33058BC33FB4E03162A2492C\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.37\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.37,\"AppVersion\":\""
		"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"4.0.0.19\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.72,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\""
		":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.26\"},{\"appid\":\"fgbafbciocncjfbbonhocjaohoknlaco\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.09\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.2EE0FD95211580C591EEB5DF8280DB42AA00166AB03A919A3748BD857A42EA75\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.09\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.09,\"AppVersion\":\""
		"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2024.12.14.1\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.42\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1E1174204F8A0A13DE2E224A1BE882D2724A6FD13BA18A895FD5098FD5552460\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.42\",\""
		"AppMajorVersion\":\"131\",\"AppRollout\":0.42,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"3057\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.51\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.51\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.51,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.96\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.2C72334256F1AC0963A5999AC290B2DFC84E1BF124D8F3E586B3C18E5BD102E6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.96\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.96,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2025.1.15.2\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.52\",\"enabled\":true,\"installdate\":-1,"
		"\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1CFA0A98082E573ECFE99DECF7A7122C5CA3575EECA089BF9C3A2A2D2D315032\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.52\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.52,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2.0.8022.0\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.62\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8D0A42A37A981A46B00865EF11F43AB0AC84B248E015FB228D88A7D7B511AEBA\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.62\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.62,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2.0.0.19\"},{\"appid\":\""
		"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.87\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.87\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.87,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\""
		"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.80\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.CE938071B72D256D4C99A58BB6786778540C0AD813ED8B88F68967CE78564254\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.80\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.8,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\""
		":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"128.18275.18267.5\"},{\"appid\":\"oghefchejbbgepkneeedmklffjpbaiaa\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.04\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.5F87F608850995E52E0F1477DC78087CACBD6560E9DA289237CF2EB745EB3944\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.04\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.04,\"AppVersion\":\""
		"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.19.2.0\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.45\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.45\",\""
		"AppMajorVersion\":\"131\",\"AppRollout\":0.45,\"AppVersion\":\"131.0.2903.146\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2024.8.10.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.22631.4751\"},\"prodversion\":\"131.0.2903.146\",\"protocol\":\"3.1\",\"requestid\":\"{2c6244c8-458d-40f6-a49a-0368dbe37bc9}\",\"sessionid\":\"{acc61712-015a-4e7a-9278-0b9abe2283c1}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.195.43\"},\"updaterversion\":\"131.0.2903.146\"}}", 
		EXTRARES, 
		"Url=/neededge/v1?bucket=69", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("1_startPage");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(69);

	web_url("192.168.88.127:8090", 
		"URL=http://192.168.88.127:8090/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
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
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36 Edg/131.0.0.0\",\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":\"588fe24f-7f6f-4cc5-bdb1-0369561e5ae3\",\"onlineIdTicket\":\"t=GwAWAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAEObyElYyddCRG35TuMn0O1XgADcV7de1Py4/7oaYx7cQ26i7rik527L8CTjg8y4Px9CNujb5F7WouMkjspQ7ppB0IL1hroRloW0QojT7Si4O2oJx33zRA4JKGe0THSzlnNsMuv001ACPRd2zM+"
		"rbNbOjjavnyVEdvAceQbAYT4RmojbBpflK89jf3gQa8QGKq5RsIFQafNko/dagdqB/fQKphe8+U2NBgEugrfesd0UYJtBv0fgs8TfAV4I6qIU8wWzH7CbtSJF2Tewyg+9zQ0doRLDzjPwJtyFPH6G8f5P9R/LZdQpvWSEG/WjfmvWn0AwfHgE=&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.22631.4751.ni_release\",\"browser\":{\"internetExplorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\"131.0.2903.146 (Official build) \"},\"client"
		"\":{\"version\":\"281483724587008\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\""
		"uri\":\"http://192.168.88.127:8090/\",\"ip\":\"192.168.88.127\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"d986b93a-480c-4eec-a456-885aca9e8c8a\",\"synchronous\":false}", 
		LAST);

	web_url("1399266199340650728", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-2530745438015964489/1399266199340650728", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ExpandedDomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/ExpandedDomainsFilterGlobal.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/2ed1297e-f6c9-4355-aec4-433ea371b116?P1=1737550049&P2=404&P3=2&P4=N5Te4AE957ahdadX79WdKGqFxJVAUgW10L66lLT35Jcvvcj6Qp8Ha3f%2fmK0f435kyqU1gw6%2fBLuMLhsNXFAYAw%3d%3d", "Referer=", ENDITEM, 
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

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"6223");

	web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.37\",\"enabled\":true,\"event\":[{\"download_time_ms\":96864,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":-2145386477,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"4.0.1.10\",\"previousversion\":\"4.0.0.19\",\"total\":67802,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/"
		"files/2ed1297e-f6c9-4355-aec4-433ea371b116?P1=1737550049&P2=404&P3=2&P4=N5Te4AE957ahdadX79WdKGqFxJVAUgW10L66lLT35Jcvvcj6Qp8Ha3f%2fmK0f435kyqU1gw6%2fBLuMLhsNXFAYAw%3d%3d\"},{\"download_time_ms\":622,\"downloaded\":67802,\"downloader\":\"direct\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"4.0.1.10\",\"previousversion\":\"4.0.0.19\",\"total\":67802,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/2ed1297e-f6c9-4355-aec4-433ea371b116?P1=1737550049&P2=404&"
		"P3=2&P4=N5Te4AE957ahdadX79WdKGqFxJVAUgW10L66lLT35Jcvvcj6Qp8Ha3f%2fmK0f435kyqU1gw6%2fBLuMLhsNXFAYAw%3d%3d\"},{\"errorcat\":3,\"errorcode\":16,\"eventresult\":0,\"eventtype\":3,\"install_time_ms\":81,\"nextfp\":\"1.585DE38D235AE02DB9B82F20B88251C2B1DD4CD3B0037A7709640F0C3D20BA9C\",\"nextversion\":\"4.0.1.10\",\"previousfp\":\"1.D0760C8DC53D9AC78138D8BB36E76A885A94363E33058BC33FB4E03162A2492C\",\"previousversion\":\"4.0.0.19\"}],\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.D0760C8DC53D9AC78138D8BB36E76A885A94363E33058BC33FB4E03162A2492C\"}]},\"version\":\"4.0.0.19\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4751\"},\"prodversion\":\"131.0.2903.146\",\"protocol\":\"3.1\",\"requestid\":\"{ef9854ed-bd00-4091-bcda-6efe6b5e7cb7}\","
		"\"sessionid\":\"{acc61712-015a-4e7a-9278-0b9abe2283c1}\",\"updaterversion\":\"131.0.2903.146\"}}", 
		LAST);

	web_add_header("Edge-Asset-Group", 
		"AddressBar");

	lr_think_time(19);

	web_url("find-assets", 
		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=addressbar_uu_files.global&version=1.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/373e48c3-3706-457d-9caf-0dd5b5d07c0b?P1=1738052490&P2=404&P3=2&P4=nA3qjCIC9OdSmhOCN47AojrRKkoZq1Ji98zMHV1lOklY50ro3VXzb70XaG%2fFtEGWNtX4Cah2%2bGlWps0OwcoZTQ%3d%3d", "Referer=", ENDITEM, 
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

	web_add_auto_header("X-Microsoft-Update-Service-Cohort", 
		"6223");

	web_custom_request("update_3", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.96\",\"enabled\":true,\"event\":[{\"download_time_ms\":24085,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":-2145386477,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"2025.1.21.1\",\"previousversion\":\"2025.1.15.2\",\"total\":178278,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/"
		"filestreamingservice/files/373e48c3-3706-457d-9caf-0dd5b5d07c0b?P1=1738052490&P2=404&P3=2&P4=nA3qjCIC9OdSmhOCN47AojrRKkoZq1Ji98zMHV1lOklY50ro3VXzb70XaG%2fFtEGWNtX4Cah2%2bGlWps0OwcoZTQ%3d%3d\"},{\"download_time_ms\":2192,\"downloaded\":178278,\"downloader\":\"direct\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2025.1.21.1\",\"previousversion\":\"2025.1.15.2\",\"total\":178278,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"373e48c3-3706-457d-9caf-0dd5b5d07c0b?P1=1738052490&P2=404&P3=2&P4=nA3qjCIC9OdSmhOCN47AojrRKkoZq1Ji98zMHV1lOklY50ro3VXzb70XaG%2fFtEGWNtX4Cah2%2bGlWps0OwcoZTQ%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":100,\"nextfp\":\"1.03324EF5AC307B5F826BF4C51FF29FDDD3265CB5262CD990838D9F7C455E9785\",\"nextversion\":\"2025.1.21.1\",\"previousfp\":\"1.2C72334256F1AC0963A5999AC290B2DFC84E1BF124D8F3E586B3C18E5BD102E6\",\"previousversion\":\"2025.1.15.2\"}],\"installdate\":-1,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.03324EF5AC307B5F826BF4C51FF29FDDD3265CB5262CD990838D9F7C455E9785\"}]},\"version\":\"2025.1.21.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4751\"},\"prodversion\":\"131.0.2903.146\",\"protocol\":\"3.1\",\"requestid\":\""
		"{0b7c89d2-cf74-418e-8896-129bb419a3e4}\",\"sessionid\":\"{acc61712-015a-4e7a-9278-0b9abe2283c1}\",\"updaterversion\":\"131.0.2903.146\"}}", 
		EXTRARES, 
		"Url=/extensionrevocation/v1/threatListUpdates_fetch?req=ChgKBm1zZWRnZRIOMTMxLjAuMjkwMy4xNDYaGwgBEAgaDTE3MzY4OTI3NjcxMTgiBCABIAIoBCICCAE=&ct=application/x-protobuf&key=d414dd4f9db345fa8003e32adc81b362", "Referer=", ENDITEM, 
		"Url=http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/e61597fb-67a0-4811-8277-72d0280614d6?P1=1738031157&P2=404&P3=2&P4=byaPZlqoYwE4Az1BWdSPZjWt9YvClBEV9d9crLIM8g%2fxzhnDk1BHif5lQf9kGdzpPtYTQaCIQTud7yHngp9Ifw%3d%3d", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("1_startPage",LR_AUTO);

	lr_think_time(9);

	web_custom_request("update_4", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.52\",\"enabled\":true,\"event\":[{\"download_time_ms\":25542,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":-2145386477,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"2.0.8025.0\",\"previousversion\":\"2.0.8022.0\",\"total\":3136649,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/"
		"filestreamingservice/files/e61597fb-67a0-4811-8277-72d0280614d6?P1=1738031157&P2=404&P3=2&P4=byaPZlqoYwE4Az1BWdSPZjWt9YvClBEV9d9crLIM8g%2fxzhnDk1BHif5lQf9kGdzpPtYTQaCIQTud7yHngp9Ifw%3d%3d\"},{\"download_time_ms\":9482,\"downloaded\":3136649,\"downloader\":\"direct\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2.0.8025.0\",\"previousversion\":\"2.0.8022.0\",\"total\":3136649,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"e61597fb-67a0-4811-8277-72d0280614d6?P1=1738031157&P2=404&P3=2&P4=byaPZlqoYwE4Az1BWdSPZjWt9YvClBEV9d9crLIM8g%2fxzhnDk1BHif5lQf9kGdzpPtYTQaCIQTud7yHngp9Ifw%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":96,\"nextfp\":\"1.A6A609F8D70C5856166799A3686A21C1E926D5B0A7FB5582E447488E3D843097\",\"nextversion\":\"2.0.8025.0\",\"previousfp\":\"1.1CFA0A98082E573ECFE99DECF7A7122C5CA3575EECA089BF9C3A2A2D2D315032\",\"previousversion\":\"2.0.8022.0\"}],\"installdate\":-1,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.A6A609F8D70C5856166799A3686A21C1E926D5B0A7FB5582E447488E3D843097\"}]},\"version\":\"2.0.8025.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4751\"},\"prodversion\":\"131.0.2903.146\",\"protocol\":\"3.1\",\"requestid\":\""
		"{5c9d70a0-73bf-4bfb-b9d9-ceee691d4030}\",\"sessionid\":\"{acc61712-015a-4e7a-9278-0b9abe2283c1}\",\"updaterversion\":\"131.0.2903.146\"}}", 
		LAST);

	lr_start_transaction("2_sendJSON");

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

	web_add_header("Origin", 
		"http://192.168.88.127:8090");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(13);

	web_submit_data("calculate", 
		"Action=http://192.168.88.127:8090/calculate", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=http://192.168.88.127:8090/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=age", "Value=100", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("3_2", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36 Edg/131.0.0.0\",\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":\"50f2e9b1-b992-4c48-9477-b03c8074df34\",\"onlineIdTicket\":\"t=GwAWAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAEObyElYyddCRG35TuMn0O1XgADcV7de1Py4/7oaYx7cQ26i7rik527L8CTjg8y4Px9CNujb5F7WouMkjspQ7ppB0IL1hroRloW0QojT7Si4O2oJx33zRA4JKGe0THSzlnNsMuv001ACPRd2zM+"
		"rbNbOjjavnyVEdvAceQbAYT4RmojbBpflK89jf3gQa8QGKq5RsIFQafNko/dagdqB/fQKphe8+U2NBgEugrfesd0UYJtBv0fgs8TfAV4I6qIU8wWzH7CbtSJF2Tewyg+9zQ0doRLDzjPwJtyFPH6G8f5P9R/LZdQpvWSEG/WjfmvWn0AwfHgE=&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.22631.4751.ni_release\",\"browser\":{\"internetExplorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\"131.0.2903.146 (Official build) \"},\"client"
		"\":{\"version\":\"281483724587008\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\""
		"uri\":\"http://192.168.88.127:8090/calculate\",\"ip\":\"192.168.88.127\"},\"referrer\":{\"uri\":\"http://192.168.88.127:8090/\",\"ip\":\"192.168.88.127\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"920c6cfc-8421-47d5-9c01-dff851fd13ec\",\"synchronous\":false}", 
		EXTRARES, 
		"Url=http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/31b0e7ef-9786-4067-b7e4-13f916b2889c?P1=1737624778&P2=404&P3=2&P4=QhRD5EpBR%2bVzVgwJQLyngO6bQVJM%2bCxcXNagi6rCWWHZ8OM7hwOwYTZIPaEz4ARZBPKYO5HvgzIDajIkKmJo1g%3d%3d", "Referer=", ENDITEM, 
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

	web_add_auto_header("X-Microsoft-Update-Service-Cohort", 
		"6223");

	lr_think_time(13);

	web_custom_request("update_5", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.80\",\"enabled\":true,\"event\":[{\"download_time_ms\":24066,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":-2145386477,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"128.18292.18275.5\",\"previousversion\":\"128.18275.18267.5\",\"total\":4519215,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/"
		"filestreamingservice/files/31b0e7ef-9786-4067-b7e4-13f916b2889c?P1=1737624778&P2=404&P3=2&P4=QhRD5EpBR%2bVzVgwJQLyngO6bQVJM%2bCxcXNagi6rCWWHZ8OM7hwOwYTZIPaEz4ARZBPKYO5HvgzIDajIkKmJo1g%3d%3d\"},{\"download_time_ms\":13184,\"downloaded\":4519215,\"downloader\":\"direct\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"128.18292.18275.5\",\"previousversion\":\"128.18275.18267.5\",\"total\":4519215,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"31b0e7ef-9786-4067-b7e4-13f916b2889c?P1=1737624778&P2=404&P3=2&P4=QhRD5EpBR%2bVzVgwJQLyngO6bQVJM%2bCxcXNagi6rCWWHZ8OM7hwOwYTZIPaEz4ARZBPKYO5HvgzIDajIkKmJo1g%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":233,\"nextfp\":\"1.EEDAD3BB7D075A888641ED67AC6E80E12BCCB7FFAB5A605A9F275791EA3F24EA\",\"nextversion\":\"128.18292.18275.5\",\"previousfp\":\"1.CE938071B72D256D4C99A58BB6786778540C0AD813ED8B88F68967CE78564254\",\"previousversion\":\"128.18275.18267.5\"}],\"installdate\":-1,\"lang\""
		":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.EEDAD3BB7D075A888641ED67AC6E80E12BCCB7FFAB5A605A9F275791EA3F24EA\"}]},\"version\":\"128.18292.18275.5\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4751\"},\"prodversion\":\"131.0.2903.146\",\"protocol\":\"3.1\",\""
		"requestid\":\"{b0f45f0a-f860-47df-acca-15cace45f781}\",\"sessionid\":\"{acc61712-015a-4e7a-9278-0b9abe2283c1}\",\"updaterversion\":\"131.0.2903.146\"}}", 
		LAST);

	lr_end_transaction("2_sendJSON",LR_AUTO);

	lr_think_time(8);

	web_custom_request("update_6", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.45\",\"enabled\":true,\"event\":[{\"download_time_ms\":8212,\"downloaded\":6252,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.11.8.0\",\"previousversion\":\"2024.8.10.0\",\"total\":6252,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"2a0d597c-a09c-4400-be86-87596dd2e696?P1=1737553649&P2=404&P3=2&P4=b6jmTbxb%2bPGDydywjGZJ0aChFUymuK6j7ssvrs5uA71WskNcU3CfOmdyqNonFzwaEvFBafOgqGu3HDEZ%2b4OHAg%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":489,\"nextfp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\",\"nextversion\":\"2024.11.8.0\",\"previousfp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\",\"previousversion\":\"2024.8.10.0\"}],\"installdate\":-1,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\"}]},\"version\":\"2024.11.8.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4751\"},\"prodversion\":\"131.0.2903.146\",\"protocol\":\"3.1\",\"requestid\":\""
		"{17c36d4f-0ee7-460a-b5cd-07b97aa709ae}\",\"sessionid\":\"{acc61712-015a-4e7a-9278-0b9abe2283c1}\",\"updaterversion\":\"131.0.2903.146\"}}", 
		LAST);

	return 0;
}