Action()
{
	lr_start_transaction("1_startPage");

	web_url("192.168.88.127:8090", 
		"URL=http://192.168.88.127:8090/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("1_startPage",LR_AUTO);

	lr_start_transaction("2_sendJSON");

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

	lr_end_transaction("2_sendJSON",LR_AUTO);

	return 0;
}