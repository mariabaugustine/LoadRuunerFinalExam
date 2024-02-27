vuser_end()
{

	/* Click Logout */

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("logout", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/auth/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/performance/searchEvaluatePerformanceReview", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}