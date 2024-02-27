/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_sockets_option("TLS_SNI", "0");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

//Correlation 

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
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);
    
	web_set_sockets_option("TLS_SNI", "1");

	web_url("messages", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/core/i18n/messages", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/auth/login", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);
	
//	 web_image_check("image check","Src=/web/images/ohrm_branding.png?v=1706326081969",LAST);
	return 0;
}
