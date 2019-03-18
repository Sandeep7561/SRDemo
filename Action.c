Action()
{

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
//	web_reg_save_param("Cvalue","lb=","rb=","Search=body",LAST);
//	web_set_max_html_param_len("9999999");

	web_url("Dashboard.jspa", 
		"URL=https://enable.lrn.com/secure/Dashboard.jspa", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("resources", 
		"URL=https://enable.lrn.com/rest/webResources/1.0/resources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/secure/Dashboard.jspa", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"r\":[],\"c\":[\"jira.webresources:mentions-feature\"]," 
		"\"xc\":[\"_super\",\"atl.dashboard\"," 
		"\"atl.general\",\"jira.global\",\"jira.general\"]," 
		"\"xr\":[\"com.tempoplugin.tempo-core:tempo-core\"," 
		"\"com.atlassian.auiplugin:aui-date-picker\"," 
		"\"com.tempoplugin.tempo-core:tempo-pikaday\"," 
		"\"com.atlassian.feedback.jira-feedback-plugin:button-resources-init\"]}",
		LAST);

	return 0;
}
