Login()
{

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(14);

	web_custom_request("resources_2", 
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"r\":[],\"c\":[\"browser-metrics-plugin.contrib\"],\"xc\":[\"_super\",\"atl.dashboard\",\"atl.general\",\"jira.global\",\"jira.general\"],\"xr\":[\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\"com.tempoplugin.tempo-core:tempo-pikaday\",\"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\"]}", 
		LAST);

	web_submit_data("dashboard-diagnostics", 
		"Action=https://enable.lrn.com/plugins/servlet/gadgets/dashboard-diagnostics", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=uri", "Value=https://enable.lrn.com/secure/Dashboard.jspa", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("bulk", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-885},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-871}]", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("appswitcher", 
		"URL=https://enable.lrn.com/rest/menu/latest/appswitcher?_=1552625625045", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("message", 
		"URL=https://enable.lrn.com/rest/scriptrunner/1.0/message?_=1552625625051", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("resources_3", 
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"r\":[],\"c\":[\"com.atlassian.jira.plugins.jira-development-integration-plugin:devstatus-dialog-resources-ctx\"],\"xc\":[\"_super\",\"atl.dashboard\",\"atl.general\",\"jira.global\",\"jira.general\",\"browser-metrics-plugin.contrib\",\"atl.global\",\"jira.dashboard\",\"jira.global.look-and-feel\"],\"xr\":[\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\"com.tempoplugin.tempo-core:tempo-pikaday\",\"com.atlassian.feedback.jira-feedback-plugin"
		":button-resources-init\",\"com.atlassian.jira.jira-tzdetect-plugin:tzdetect-banner-component\",\"com.atlassian.jira.jira-tzdetect-plugin:tzdetect-lib\",\"jira.webresources:calendar-localisation-moment\",\"com.tempoplugin.tempo-core:tempo-moment\",\"com.tempoplugin.tempo-core:core-global-constants-resource\",\"com.tempoplugin.tempo-core:core-expense-backbone-resource\",\"com.atlassian.auiplugin:internal-@atlassian-aui-src-js-vendor-jquery-jquery-ui-jquery-ui-datepicker\",\"com.atlassian.auiplugin"
		":internal-@atlassian-aui-src-js-aui-date-picker\",\"com.tempoplugin.tempo-core:core-expense-resource\",\"com.atlassian.feedback.jira-feedback-plugin:button-resources\",\"jira.webresources:bigpipe-js\",\"jira.webresources:bigpipe-init\"]}", 
		LAST);

	web_url("enable.lrn.com", 
		"URL=https://geoip.getzephyr.com/json/enable.lrn.com", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("bulk_2", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary=[{\"name\":\"jira.devsummary.dialog-resources.wrm.load\",\"properties\":{\"durationInMillis\":16536},\"timeDelta\":-4034},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4033},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4022},{\"name\":\"browser.metrics.navigation\",\"properties\":{\"apdex\":\"0\",\"firstPaint\":\"22636\",\"isInitial\":\"true\",\"journeyId\":\"cda336d9-96b9-4afb-a658-bf7eb3561c45\",\"key\":\"jira.dashboard\",\""
		"navigationType\":\"0\",\"readyForUser\":\"22638\",\"redirectCount\":\"0\",\"resourceLoadedEnd\":\"21923\",\"resourceLoadedStart\":10370.595000000321,\"threshold\":\"1000\",\"fetchStart\":\"61\",\"domainLookupStart\":\"3749\",\"domainLookupEnd\":\"3824\",\"connectStart\":\"3824\",\"connectEnd\":\"10018\",\"secureConnectionStart\":\"8633\",\"requestStart\":\"10034\",\"responseStart\":\"10315\",\"responseEnd\":\"10787\",\"domLoading\":\"10342\",\"domInteractive\":\"22572\",\""
		"domContentLoadedEventStart\":\"22572\",\"domContentLoadedEventEnd\":\"22704\",\"domComplete\":\"39222\",\"loadEventStart\":\"39222\",\"loadEventEnd\":\"39223\",\"userAgent\":\"Mozilla/5.0 (Windows NT 6.1; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/72.0.3626.121 Safari/537.36\",\"correlationId\":\"d81f8ce09f4bd8\",\"serverDuration\":\"114\",\"dbConnsTimeInMs\":\"\",\"applicationHash\":\"9f5725bb824792b3230a5d8716f0c13e296a3cae\",\"environment\":\"\",\"dataCenter\":\"\",\"rack\":\"\","
		"\"manifestoHash\":\"\",\"resourceTiming\":\"{\\\"\\xE2\\x98\\xA0\\\":[\\\"2,802,a5m,9b8,8tx,802,,802,802,802\\\",\\\"2,802,akn,9ci,8u4,8u2,862,807,807,807\\\",\\\"2,803,ae8,ac4,a4r,9uh,8bm,8bm,8bm,8bm\\\",\\\"2,804,ak7,ajj,a9g,804,,804,804,804\\\",\\\"2,804,akg,ak6,ab9,a5z,8ia,8c5,8c5,8c5\\\",\\\"2,804,and,anc,aea,804,,804,804,804\\\",\\\"3,804,esg,b06,akn,804,,804,804,804\\\",\\\"3,8bn,b7z,ax6,akv,8bn,,8bn,8bn,8bn\\\",\\\"3,8bn,gwz,b53,and,8bn,,8bn,8bn,8bn\\\",\\\"3,8bn,bp9,bdr,apd,apd,8tw,8tw,"
		"8tw,8tw\\\",\\\"3,8bs,bwz,bw4,bl0,8bs,,8bs,8bs,8bs\\\",\\\"3,8bs,c2g,bx8,bq2,bkl,8tw,8tw,8tw,8tw\\\",\\\"3,8bs,c2t,c25,bvj,8bs,,8bs,8bs,8bs\\\",\\\"3,8bs,c88,c87,bxq,8bs,,8bs,8bs,8bs\\\",\\\"3,8bt,fua,cv0,c29,8bt,,8bt,8bt,8bt\\\",\\\"3,8bt,dfx,d0o,c5l,8bt,,8bt,8bt,8bt\\\",\\\"3,8bt,dgh,d0f,c5q,8bt,,8bt,8bt,8bt\\\",\\\"3,8bu,dgh,d0e,c88,8bu,,8bu,8bu,8bu\\\",\\\"3,8bu,esg,en2,dm1,8bu,,8bu,8bu,8bu\\\",\\\"3,8bu,esg,emi,e16,8bu,,8bu,8bu,8bu\\\",\\\"3,8bv,esh,ena,e17,8bv,,8bv,8bv,8bv\\\",\\\"3,8bw,fto,"
		"ftl,eyz,8bw,,8bw,8bw,8bw\\\",\\\"2,8by,bvj,bp8,akh,8by,,8by,8by,8by\\\",\\\"3,8bz,fto,ftm,f2s,8bz,,8bz,8bz,8bz\\\",\\\"3,8c0,fto,ftk,f8j,8c0,,8c0,8c0,8c0\\\",\\\"3,8c1,g75,g71,fv8,8c1,,8c1,8c1,8c1\\\",\\\"5,g30,gdw,gdo,g3d,g30,,g30,g30,g30\\\"]}\",\"experiments\":\"[]\",\"dbReadsTimeInMs\":\"\"},\"timeDelta\":-3996}]", 
		LAST);

	/* login */

	lr_save_string(lr_unmask("5c8b31d7e676451b3793f6a6"), "PasswordParameter");

	lr_think_time(7);

/*Correlation comment - Do not change!  Original value='BGSH-UXLK-HYRI-SNIE|a222b8fea4e4d6389af5d60d3c4c93bddecc39c3|lin' Name ='atl_token' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=atl_token",
		"RegExp=atlassian\\.xsrf\\.token=(BGSH-UXLK-HYRI-.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		LAST);

	web_submit_data("login", 
		"Action=https://enable.lrn.com/rest/gadget/1.0/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=os_username", "Value=sandeep.kumar", ENDITEM, 
		"Name=os_password", "Value={PasswordParameter}", ENDITEM, 
		LAST);

	web_convert_param("atl_token_URL2",
		"SourceString={atl_token}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='14302' Name ='filterId' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=filterId",
		"RegExp=filter-(.*?)&quot",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Dashboard.jspa*",
		LAST);
		//C_EncKeyVal";
		web_reg_save_param("C_EncKeyVal","lb=var zEncKeyVal = \"","rb=\";",LAST);

	web_url("Dashboard.jspa_2", 
		"URL=https://enable.lrn.com/secure/Dashboard.jspa", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("resources_4", 
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"r\":[],\"c\":[\"jira.webresources:mentions-feature\"],\"xc\":[\"_super\",\"atl.dashboard\",\"atl.general\",\"jira.global\",\"jira.general\"],\"xr\":[\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\"]}", 
		LAST);

	web_custom_request("resources_5", 
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"r\":[],\"c\":[\"browser-metrics-plugin.contrib\"],\"xc\":[\"_super\",\"atl.dashboard\",\"atl.general\",\"jira.global\",\"jira.general\"],\"xr\":[\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\"]}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("172.16.20.118", 
		"URL=https://geoip.getzephyr.com/json/172.16.20.118", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("appswitcher_2", 
		"URL=https://enable.lrn.com/rest/menu/latest/appswitcher?_=1552625658648", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("message_2", 
		"URL=https://enable.lrn.com/rest/scriptrunner/1.0/message?_=1552625658650", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("filter",
		"URL=https://enable.lrn.com/rest/gadget/1.0/issueTable/filter?num=10&tableContext=jira.table.cols.dashboard&addDefault=false&columnNames=issuetype&columnNames=issuekey&columnNames=priority&columnNames=summary&enableSorting=true&paging=true&showActions=true&filterId={filterId}&sortBy=&startIndex=0&_=1552625658700",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa",
		"Snapshot=t28.inf",
		"Mode=HTML",
		"EncType=application/json; charset=utf-8",
		LAST);

	web_url("favfilters", 
		"URL=https://enable.lrn.com/rest/gadget/1.0/favfilters?showCounts=true&_=1552625658707", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("jql", 
		"URL=https://enable.lrn.com/rest/gadget/1.0/issueTable/jql?num=10&tableContext=jira.table.cols.dashboard&addDefault=true&enableSorting=true&paging=true&showActions=true&jql=assignee+%3D+currentUser()+AND+resolution+%3D+unresolved+ORDER+BY+priority+DESC%2C+created+ASC&sortBy=&startIndex=0&_=1552625658718", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	web_url("generate",
		"URL=https://enable.lrn.com/rest/gadget/1.0/twodimensionalfilterstats/generate?filterId=filter-{filterId}&xstattype=statuses&ystattype=project&sortDirection=asc&sortBy=natural&numberToShow=5&_=1552625658689",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa",
		"Snapshot=t31.inf",
		"Mode=HTML",
		LAST);

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_submit_data("dashboard-diagnostics_2", 
		"Action=https://enable.lrn.com/plugins/servlet/gadgets/dashboard-diagnostics", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=uri", "Value=https://enable.lrn.com/secure/Dashboard.jspa", ENDITEM, 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_url("analytics", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/analytics?event=&projectId=&versionId=&cycleId=&_=1552625658765", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("bulk_3", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-787},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-772},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-384},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-362}]", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_custom_request("resources_6", 
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"r\":[\"com.atlassian.jira.jira-header-plugin:newsletter-signup-tip\"],\"c\":[\"com.atlassian.jira.plugins.jira-development-integration-plugin:devstatus-dialog-resources-ctx\"],\"xc\":[\"_super\",\"atl.dashboard\",\"atl.general\",\"jira.global\",\"jira.general\",\"browser-metrics-plugin.contrib\",\"atl.global\",\"jira.dashboard\",\"jira.global.look-and-feel\"],\"xr\":[\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\""
		"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\",\"com.atlassian.jira.jira-tzdetect-plugin:tzdetect-banner-component\",\"com.atlassian.jira.jira-tzdetect-plugin:tzdetect-lib\",\"jira.webresources:calendar-localisation-moment\",\"com.tempoplugin.tempo-core:core-global-constants-resource\",\"com.tempoplugin.tempo-core:core-expense-backbone-resource\",\"com.atlassian.auiplugin:internal-@atlassian-aui-src-js-vendor-jquery-jquery-ui-jquery-ui-datepicker\",\"com.atlassian.auiplugin"
		":internal-@atlassian-aui-src-js-aui-date-picker\",\"com.tempoplugin.tempo-core:core-expense-resource\",\"com.atlassian.feedback.jira-feedback-plugin:button-resources\",\"jira.webresources:bigpipe-js\",\"jira.webresources:bigpipe-init\"]}", 
		LAST);

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	 
	web_custom_request("bulk_4", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary=[{\"name\":\"jira.dashboard.gadgets.twodstats.rowscount\",\"properties\":{\"value\":6},\"timeDelta\":-5354},{\"name\":\"jira.dashboard.gadgets.twodstats.colscount\",\"properties\":{\"value\":7},\"timeDelta\":-5354},{\"name\":\"browser.metrics.navigation\",\"properties\":{\"apdex\":\"0\",\"firstPaint\":\"5354\",\"isInitial\":\"true\",\"journeyId\":\"cda336d9-96b9-4afb-a658-bf7eb3561c45\",\"key\":\"jira.dashboard\",\"navigationType\":\"0\",\"readyForUser\":\"5551\",\"redirectCount\":\"0\""
		",\"resourceLoadedEnd\":\"4830\",\"resourceLoadedStart\":321.78999998723157,\"threshold\":\"1000\",\"unloadEventStart\":\"285\",\"unloadEventEnd\":\"286\",\"fetchStart\":\"6\",\"domainLookupStart\":\"6\",\"domainLookupEnd\":\"6\",\"connectStart\":\"6\",\"connectEnd\":\"6\",\"requestStart\":\"7\",\"responseStart\":\"276\",\"responseEnd\":\"765\",\"domLoading\":\"320\",\"domInteractive\":\"5350\",\"domContentLoadedEventStart\":\"5350\",\"domContentLoadedEventEnd\":\"5565\",\"domComplete\":\"5566\",\""
		"loadEventStart\":\"5566\",\"loadEventEnd\":\"5568\",\"userAgent\":\"Mozilla/5.0 (Windows NT 6.1; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/72.0.3626.121 Safari/537.36\",\"correlationId\":\"4d26e655c1fb44\",\"serverDuration\":\"219\",\"dbReadsTimeInMs\":\"1\",\"dbConnsTimeInMs\":\"4\",\"applicationHash\":\"9f5725bb824792b3230a5d8716f0c13e296a3cae\",\"environment\":\"\",\"dataCenter\":\"\",\"rack\":\"\",\"manifestoHash\":\"\",\"resourceTiming\":\"{\\\"\\xE2\\x98\\xA0\\\":[\\\"2,8x,9l"
		",94,94,8x,,8x,8x,8x\\\",\\\"2,8y,1w2,rc,97,8y,,8y,8y,8y\\\",\\\"2,8y,9g,99,96,8y,,8y,8y,8y\\\",\\\"2,8y,9i,9a,96,8y,,8y,8y,8y\\\",\\\"2,8y,9l,9b,97,8y,,8y,8y,8y\\\",\\\"3,8y,8y,8y,8y,8y,,8y,8y,8y\\\",\\\"3,8y,we,r1,9c,8y,,8y,8y,8y\\\",\\\"3,8y,3q6,rn,9i,8y,,8y,8y,8y\\\",\\\"3,8z,8z,8z,8z,8z,,8z,8z,8z\\\",\\\"3,8z,8z,8z,8z,8z,,8z,8z,8z\\\",\\\"3,8z,8z,8z,8z,8z,,8z,8z,8z\\\",\\\"3,8z,8z,8z,8z,8z,,8z,8z,8z\\\",\\\"3,8z,8z,8z,8z,8z,,8z,8z,8z\\\",\\\"3,8z,8z,8z,8z,8z,,8z,8z,8z\\\",\\\"3,8z,8z,8z,8z,8z,"
		",8z,8z,8z\\\",\\\"3,di,di,di,di,di,,di,di,di\\\",\\\"3,di,di,di,di,di,,di,di,di\\\",\\\"3,di,di,di,di,di,,di,di,di\\\",\\\"3,di,di,di,di,di,,di,di,di\\\",\\\"2,dj,er,em,ec,dj,,dj,dj,dj\\\",\\\"3,dl,ro,rh,f0,dl,,dl,dl,dl\\\",\\\"3,wt,wt,wt,wt,wt,,wt,wt,wt\\\",\\\"3,wu,wu,wu,wu,wu,,wu,wu,wu\\\",\\\"5,2aw,2lx,2lv,2az,2aw,,2aw,2aw,2aw\\\",\\\"5,3vf,429,428,3vh,3vf,,3vf,3vf,3vf\\\",\\\"5,3zt,47x\\\",\\\"4,42c,42c,42c,42c,42c,,42c,42c,42c\\\"]}\",\"experiments\":\"[]\"},\"timeDelta\":-4916},{\"name\":\""
		"jira.devsummary.dialog-resources.wrm.load\",\"properties\":{\"durationInMillis\":1573},\"timeDelta\":-4420}]", 
		LAST);

	return 0;
}
