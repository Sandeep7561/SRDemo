Logout()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("logout",
		"URL=https://enable.lrn.com/logout?atl_token={atl_token}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t119.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("resources_11",
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/secure/Logout!default.jspa?atl_token={atl_token_URL2}",
		"Snapshot=t120.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={\"r\":[],\"c\":[\"jira.webresources:mentions-feature\"],\"xc\":[\"_super\",\"atl.general\",\"jira.general\",\"jira.login\",\"jira.global\"],\"xr\":[\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\"com.tempoplugin.tempo-core:tempo-pikaday\",\"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\"]}",
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_custom_request("resources_12",
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/secure/Logout!default.jspa?atl_token={atl_token_URL2}",
		"Snapshot=t121.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={\"r\":[],\"c\":[\"browser-metrics-plugin.contrib\"],\"xc\":[\"_super\",\"atl.general\",\"jira.general\",\"jira.login\",\"jira.global\"],\"xr\":[\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\"com.tempoplugin.tempo-core:tempo-pikaday\",\"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\"]}",
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("message_4",
		"URL=https://enable.lrn.com/rest/scriptrunner/1.0/message?_=1552626125440",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/secure/Logout!default.jspa?atl_token={atl_token_URL2}",
		"Snapshot=t122.inf",
		"Mode=HTML",
		LAST);

	web_url("appswitcher_4",
		"URL=https://enable.lrn.com/rest/menu/latest/appswitcher?_=1552626125452",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/secure/Logout!default.jspa?atl_token={atl_token_URL2}",
		"Snapshot=t123.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_23",
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/secure/Logout!default.jspa?atl_token={atl_token_URL2}",
		"Snapshot=t124.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1066},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1055}]",
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("172.16.20.118_3",
		"URL=https://geoip.getzephyr.com/json/172.16.20.118",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/secure/Logout!default.jspa?atl_token={atl_token_URL2}",
		"Snapshot=t125.inf",
		"Mode=HTML",
		LAST);

	return 0;
}