Test()
{

	/* Click on test */

	/* Click on plan test cycle */

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='15300' Name ='projectId' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=projectId",
		"RegExp=WRM\\._unparsedData\\[\"project-id\"]=\"(.*?)\";\\\nWRM\\._unparsedData\\[",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/CAM*",
		LAST);

/*Correlation comment - Do not change!  Original value='20804' Name ='versionId' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=versionId",
		"RegExp=option\\ value=\"(.*?)\"\\ title",
		"Ordinal=32",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/CAM*",
		LAST);

	web_url("PlanTestCycle.jspa", 
		"URL=https://enable.lrn.com/secure/PlanTestCycle.jspa", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("resources_7", 
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"r\":[],\"c\":[\"jira.webresources:mentions-feature\"],\"xc\":[\"_super\",\"com.thed.zephyr.je:zephyr-project-sidebar-test\",\"com.atlassian.jira.projects.sidebar.init\",\"jira.browse.project\",\"atl.general\",\"jira.general\",\"jira.global\"],\"xr\":[\"com.thed.zephyr.je:zephyr-project-dashboard-resources-tree\",\"jira.webresources:groupbrowser\",\"jira.webresources:group-pickers\",\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\""
		"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\"]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_custom_request("resources_8", 
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"r\":[],\"c\":[\"jira.project.sidebar\",\"jira.project.sidebar.software\"],\"xc\":[\"_super\",\"com.thed.zephyr.je:zephyr-project-sidebar-test\",\"com.atlassian.jira.projects.sidebar.init\",\"jira.browse.project\",\"atl.general\",\"jira.general\",\"jira.global\"],\"xr\":[\"com.thed.zephyr.je:zephyr-project-dashboard-resources-tree\",\"jira.webresources:groupbrowser\",\"jira.webresources:group-pickers\",\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\""
		"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\"]}", 
		LAST);

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("resources_9", 
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"r\":[],\"c\":[\"browser-metrics-plugin.contrib\"],\"xc\":[\"_super\",\"com.thed.zephyr.je:zephyr-project-sidebar-test\",\"com.atlassian.jira.projects.sidebar.init\",\"jira.browse.project\",\"atl.general\",\"jira.general\",\"jira.global\",\"jira.project.sidebar\"],\"xr\":[\"com.thed.zephyr.je:zephyr-project-dashboard-resources-tree\",\"jira.webresources:groupbrowser\",\"jira.webresources:group-pickers\",\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\""
		"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\"]}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_url("testsbyversion",
		"URL=https://enable.lrn.com/rest/zephyr/latest/test/summary/testsbyversion?projectId={projectId}&versionName=&offset=0&maxRecords=10&_=1552625805917",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t41.inf",
		"Mode=HTML",
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_url("172.16.20.118_2", 
		"URL=https://geoip.getzephyr.com/json/172.16.20.118", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_custom_request("lastVisited", 
		"URL=https://enable.lrn.com/rest/projects/1.0/project/CAM/lastVisited", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"Body={\"id\":\"com.thed.zephyr.je:zephyr-tests-page\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("message_3", 
		"URL=https://enable.lrn.com/rest/scriptrunner/1.0/message?_=1552625805961", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("appswitcher_3", 
		"URL=https://enable.lrn.com/rest/menu/latest/appswitcher?_=1552625805965", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_url("testsbycomponent",
		"URL=https://enable.lrn.com/rest/zephyr/latest/test/summary/testsbycomponent?projectId={projectId}&componentName=&offset=0&maxRecords=10&_=1552625805919",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t46.inf",
		"Mode=HTML",
		LAST);

	web_custom_request("getcyclesummarycustomization", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/preference/getcyclesummarycustomization?_=1552625805971", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("resources_10", 
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"r\":[\"com.atlassian.jira.jira-header-plugin:newsletter-signup-tip\"],\"c\":[],\"xc\":[\"_super\",\"com.thed.zephyr.je:zephyr-project-sidebar-test\",\"com.atlassian.jira.projects.sidebar.init\",\"jira.browse.project\",\"atl.general\",\"jira.general\",\"jira.global\",\"jira.project.sidebar\",\"browser-metrics-plugin.contrib\",\"atl.global\",\"jira.global.look-and-feel\"],\"xr\":[\"com.thed.zephyr.je:zephyr-project-dashboard-resources-tree\",\"jira.webresources:groupbrowser\",\""
		"jira.webresources:group-pickers\",\"com.tempoplugin.tempo-core:tempo-core\",\"com.atlassian.auiplugin:aui-date-picker\",\"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\",\"com.atlassian.jira.jira-tzdetect-plugin:tzdetect-banner-component\",\"com.atlassian.jira.jira-tzdetect-plugin:tzdetect-lib\",\"jira.webresources:group-label-lozenge\",\"jira.webresources:ie-imitation-placeholder\",\"jira.webresources:jira-project-issuetype-fields\",\"jira.webresources:jira-fields\",\""
		"jira.webresources:calendar-localisation-moment\",\"com.tempoplugin.tempo-core:core-global-constants-resource\",\"com.tempoplugin.tempo-core:core-expense-backbone-resource\",\"com.atlassian.auiplugin:internal-@atlassian-aui-src-js-vendor-jquery-jquery-ui-jquery-ui-datepicker\",\"com.atlassian.auiplugin:internal-@atlassian-aui-src-js-aui-date-picker\",\"com.tempoplugin.tempo-core:core-expense-resource\",\"com.atlassian.feedback.jira-feedback-plugin:button-resources\",\"jira.webresources:bigpipe-js\""
		",\"jira.webresources:bigpipe-init\"]}", 
		LAST);

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

//	web_url("analytics_2", 
//		"URL=https://enable.lrn.com/rest/zephyr/latest/analytics?event=&projectId=&versionId=&cycleId=&_=1552625806278", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
//		"Snapshot=t49.inf", 
//		"Mode=HTML", 
//		LAST);

	web_revert_auto_header("AO-7DEABF");
web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_revert_auto_header("X-Requested-With");

	web_custom_request("allversionstext", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/util/allversionstext?_=1552625805420", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("bulk_5", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-18},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-17},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-16},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-15},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-14},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-13},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1382},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1020},{\"name\":\"bigpipe.sidebar.success\",\"properties\":{},\"timeDelta\":-698},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-618},{\"name\":\"jira.project.centric.navigation.sidebar.load.project\",\"properties\":{},\"timeDelta\":-549},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-540},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-538},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-536},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-485},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-464},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-185},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-179}]", 
		LAST);

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_url("testsbylabel",
		"URL=https://enable.lrn.com/rest/zephyr/latest/test/summary/testsbylabel?projectId={projectId}&labelName=&offset=0&maxRecords=10&_=1552625805920",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t52.inf",
		"Mode=HTML",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_custom_request("versionBoard-list",
		"URL=https://enable.lrn.com/rest/zephyr/latest/util/versionBoard-list?projectId={projectId}&_=1552625805421",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t53.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	lr_think_time(4);

	web_custom_request("bulk_6", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5388},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5387},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5387},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5387},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5387},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5387},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5387},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5387},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5387},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5386},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-5141},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4939},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4938},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4938},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4938},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4938},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4938},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4938}]", 
		LAST);

	/* collapase main */

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("bulk_7", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"jira.project.centric.navigation.sidebar.click.link\",\"properties\":{\"id\":\"NONE\",\"prefix\":\"NONE\",\"sidebarSourcePage\":\"unknown\"},\"timeDelta\":-665}]", 
		LAST);

	return 0;
}
