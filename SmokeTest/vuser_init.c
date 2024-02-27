/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_sockets_option("TLS_SNI", "0");
	web_image_check("image check","Src=/web/images/ohrm_branding.png?v=1706326081969",LAST);

	web_reg_find("Text=Login", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

/*Correlation comment - Do not change!  Original value='f7374777ed13b00d4d17029077ee3.fDJgZIu_X5_LjjndGXNqNCpyrj5UCU1ldmWFxP2QBRg.SF4ZNsj0N9Ss-g6nWyk9UFtL4HUnZCwBAjHGl8SnTE1PfRIQyIoUzK_vAQ' Name ='_token' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=_token",
		"LB=quot;",
		"RB=&quot",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/login*",
		LAST);

	web_url("opensource-demo.orangehrmlive.com", 
		"URL=https://opensource-demo.orangehrmlive.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("messages", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/core/i18n/messages", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/auth/login", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
