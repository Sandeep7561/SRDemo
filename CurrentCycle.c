CurrentCycle()
{

	/* Click on current cycle */

	/* expand cycle */

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(38);

	web_custom_request("cycle",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805422",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t56.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_8", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1386}]", 
		LAST);

	return 0;
}
