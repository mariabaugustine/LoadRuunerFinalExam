/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_sockets_option("TLS_SNI", "0");

	web_reg_find("Text=Login", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

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
