Action()
{

	/* Login */

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_submit_data("validate", 
		"Action=https://opensource-demo.orangehrmlive.com/web/index.php/auth/validate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/auth/login", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_token", "Value=254958286047b653f3c86e2c63b2b.XF0WxRx7x47N9v2KljmbCaTsHkl-2ETmf4DL0i-sGY0.bBR3qTE3s-SExZju4H3iaP7ZZiwngjWEK8W45k30dNgRMCL3KTr_2K6ilg", ENDITEM, 
		"Name=username", "Value=Admin", ENDITEM, 
		"Name=password", "Value=admin123", ENDITEM, 
		LAST);

	web_url("time-at-work", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/time-at-work?timezoneOffset=5.5&currentDate=2024-02-26&currentTime=13:39", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_url("action-summary", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/action-summary", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shortcuts", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/shortcuts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("feed", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/buzz/feed?limit=5&offset=0&sortOrder=DESC&sortField=share.createdAtUtc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_url("locations", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/locations", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("leaves", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/leaves?date=2024-02-26", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("subunit", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/dashboard/employees/subunit", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("push", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/events/push", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Accept-Language");

	lr_think_time(18);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:07LOOTyKzIKcg6fDp4BRa0SPbkjuLB4jmr0VQj7FWeg&cup2hreq=de55d01da5dc3ab2018f657f733cb00c3df6192f3c00485eb4918b6f96f86204", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{0b1e24dc-6b21-4143-87c9-d05d5c93bfc1}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{476ea73f-069f-410b-bc40-b0dcb85e8437}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{d562f9b0-42d0-4969-8f4f-c4eeadc96b90}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{ad6e45e2-5c7a-48ae-802c-91f194816ea6}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{af29e0c1-d3d0-4d5e-9a03-da20d75c9260}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.5bdc69c131996e6e6abeeba649e5a21c2f62a0b40bce413f8a728108c0d4fe06\"}]},\"ping\""
		":{\"ping_freshness\":\"{30b0a6a6-1049-459e-9d08-38c5c35519d4}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"435\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{af53627c-6620-49bf-bffd-d1cc8a35c883}\",\"rd\":6265},\"updatecheck\":{},\""
		"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.46b92bf5307e088ea1ef90e34fbf742f96913fceb07874a85814ca16443c1ba2\"}]},\"ping\":{\"ping_freshness\":\"{03be511f-2b50-4ca9-a9a6-ff3cca380627}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.2.23.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{9517b3a9-2372-48cd-b9b2-8164302db10d}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887"
		",\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{d9463489-dba8-4c03-82b7-5f9be52e9f88}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.b930b0a348442c9b3dadb2db6e011ef56c30fae064bb9941b46975e1d658e790\"}]},\"ping\":{\"ping_freshness\":\"{ccb7cdfb-9c18-4a32-b758-45ba7ba255fc}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"8566\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{45d7dabe-7696-4248-83c5-2a3ea2ccc2c0}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{35c65d35-098f-4264-a384-990dead0e2d6}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\""
		"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{2bd05743-8dc6-44ce-a699-d913785e0394}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\","
		"\"packages\":{\"package\":[{\"fp\":\"1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a\"}]},\"ping\":{\"ping_freshness\":\"{ffedb66e-0c16-4306-aedf-7c96b8271e57}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"867\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{bfa9f7e9-ddd6-4534-bb06-df0d73834dad}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\""
		"ping_freshness\":\"{590b7dde-add6-45e4-ab8c-acf64cfa06f3}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{385b3d79-8ef3-476c-964d-0b9c563977c0}\",\"rd\":6265},\""
		"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\"ping_freshness\":\"{15d0fe25-75ac-444e-87e4-561e87d8302e}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.51a086e4f0f41700b228d2b36a2a1d7e4bcae8dc42f91d7e094f4f2b0a4837e3\"}]},\"ping\":{\"ping_freshness\":\"{76c50d5c-0bd8-4be7-921c-bfc253cf8835}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.2.22.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{5d20d1be-3791-4a59-a896-66c87d71eb8d}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.7e7996864a74a4b8db2b59c559f924f321668848edbcb85386212a4901ef0e6e\"}]},\"ping\":{\"ping_freshness\":\"{06ef5e98-07ab-4b3c-8e63-6204990968f2}\",\"rd\":6265},\"updatecheck\":{},\"version\":\"2024.2.14.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\",\"requestid\":\"{e765f1fc-c55e-41be-856d-b9601d7d4cf9}\",\"sessionid\":\"{35742ea8-0e0b-45c6-be66-1dbe4c5abee7}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"124.0.6315.0\"},\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	/* Click on recruitment */

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("viewRecruitmentModule", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewRecruitmentModule", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/dashboard/index", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("candidates", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/recruitment/candidates?limit=50&offset=0&model=list&sortField=candidate.dateOfApplication&sortOrder=DESC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewCandidates", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	web_url("statuses", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/recruitment/candidates/statuses", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewCandidates", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_url("job-titles", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/admin/job-titles?limit=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewCandidates", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_url("hiring-managers", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/recruitment/hiring-managers?limit=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewCandidates", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workweek", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/workweek?model=indexed", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewCandidates", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	web_url("vacancies", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/recruitment/vacancies?model=summary&limit=0&excludeInterviewers=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewCandidates", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	web_url("holidays", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/holidays?fromDate=2024-01-01&toDate=2024-12-31", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewCandidates", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workweek_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/workweek?model=indexed", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewCandidates", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_url("holidays_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/leave/holidays?fromDate=2024-01-01&toDate=2024-12-31", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewCandidates", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Accept-Language");

	lr_think_time(7);

	web_custom_request("json_2", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"event\":[{\"download_time_ms\":16332,\"downloaded\":2224,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"8570\",\"previousversion\":\"8566\",\"total\":2224,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"hfnkpimlhhgieaddgfemjhofmfblmnib/1.2bbe3ea9e0deb819a944af91f663d6b00cd35ac607cbf6aa09aa71683616d39c/1.b930b0a348442c9b3dadb2db6e011ef56c30fae064bb9941b46975e1d658e790/c9c39c66fa65e9ad68b0f148faad8b0394b449a5da9c04d943c207288b9b90fd.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.2bbe3ea9e0deb819a944af91f663d6b00cd35ac607cbf6aa09aa71683616d39c\",\"nextversion\":\"8570\",\"previousfp\":\"1.b930b0a348442c9b3dadb2db6e011ef56c30fae064bb9941b46975e1d658e790\",\""
		"previousversion\":\"8566\"}],\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.2bbe3ea9e0deb819a944af91f663d6b00cd35ac607cbf6aa09aa71683616d39c\"}]},\"version\":\"8570\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\",\"requestid\":\"{de5e0443-1d03-41b2-bed3-9104b4a4bdbd}\",\"sessionid\":\"{35742ea8-0e0b-45c6-be66-1dbe4c5abee7}\",\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	lr_think_time(5);

	web_custom_request("json_3", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"event\":[{\"download_time_ms\":4027,\"downloaded\":9371,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"873\",\"previousversion\":\"867\",\"total\":9371,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"efniojlnjndmcbiieegkicadnoecjjef/1.1379eef506ab6fba0188245b16a8443df9500ddd8553bfb2f6f3903f4a7c6e1a/1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a/b2be5d6c90d8a6a5cfeaa9170e88b36909aa2ec238e044138ade9d89dd931c75.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.1379eef506ab6fba0188245b16a8443df9500ddd8553bfb2f6f3903f4a7c6e1a\",\"nextversion\":\"873\",\"previousfp\":\"1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a\",\"previousversion"
		"\":\"867\"}],\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.1379eef506ab6fba0188245b16a8443df9500ddd8553bfb2f6f3903f4a7c6e1a\"}]},\"version\":\"873\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\""
		"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\",\"requestid\":\"{a4e064ba-b2d8-4728-91d0-9e581420109a}\",\"sessionid\":\"{35742ea8-0e0b-45c6-be66-1dbe4c5abee7}\",\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	lr_think_time(5);

	web_custom_request("json_4", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"event\":[{\"download_time_ms\":4031,\"downloaded\":2743,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.2.23.1\",\"previousversion\":\"2024.2.22.1\",\"total\":2743,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"jflhchccmppkfebkiaminageehmchikm/1.3b3032a3bd20c3e81a87097ee894dce4d4d94fa1bc937483353981e48033c4f9/1.51a086e4f0f41700b228d2b36a2a1d7e4bcae8dc42f91d7e094f4f2b0a4837e3/f934008563f52d338a65b26e0e599bccec34d71cba1592ca58397451ecd6872d.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.3b3032a3bd20c3e81a87097ee894dce4d4d94fa1bc937483353981e48033c4f9\",\"nextversion\":\"2024.2.23.1\",\"previousfp\":\"1.51a086e4f0f41700b228d2b36a2a1d7e4bcae8dc42f91d7e094f4f2b0a4837e3\",\""
		"previousversion\":\"2024.2.22.1\"}],\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3b3032a3bd20c3e81a87097ee894dce4d4d94fa1bc937483353981e48033c4f9\"}]},\"version\":\"2024.2.23.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\",\"requestid\":\"{47bff1e3-df14-4649-88c3-3eaf61c75ecc}\",\"sessionid\":\"{35742ea8-0e0b-45c6-be66-1dbe4c5abee7}\",\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	lr_think_time(5);

	web_custom_request("json_5", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":4015,\"downloaded\":2630,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.2.21.0\",\"previousversion\":\"2024.2.14.0\",\"total\":2630,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"gonpemdgkjcecdgbnaabipppbmgfggbe/1.5eb999428f0762c5d05ef5b922c551c2dc27c134c4d10fb57e27c24c28d00c5a/1.7e7996864a74a4b8db2b59c559f924f321668848edbcb85386212a4901ef0e6e/931727fa53cc75568f51d9dd697eccfe7f82ba3fb7547d613d180f6aba54e68c.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.5eb999428f0762c5d05ef5b922c551c2dc27c134c4d10fb57e27c24c28d00c5a\",\"nextversion\":\"2024.2.21.0\",\"previousfp\":\"1.7e7996864a74a4b8db2b59c559f924f321668848edbcb85386212a4901ef0e6e\",\""
		"previousversion\":\"2024.2.14.0\"}],\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.5eb999428f0762c5d05ef5b922c551c2dc27c134c4d10fb57e27c24c28d00c5a\"}]},\"version\":\"2024.2.21.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\",\"requestid\":\"{451143d8-b118-471a-b6ed-bed1b62935df}\",\"sessionid\":\"{35742ea8-0e0b-45c6-be66-1dbe4c5abee7}\",\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_reg_find("Text=Candidates", 
		LAST);

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(34);

	web_url("candidates_2", 
		"URL=https://opensource-demo.orangehrmlive.com/web/index.php/api/v2/recruitment/candidates?limit=50&offset=0&jobTitleId=22&vacancyId=5&hiringManagerId=37&fromDate=2024-02-07&toDate=2024-02-20&status=1&methodOfApplication=1&model=list&sortField=candidate.dateOfApplication&sortOrder=DESC", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://opensource-demo.orangehrmlive.com/web/index.php/recruitment/viewCandidates", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	/* Text-check */

	return 0;
}
