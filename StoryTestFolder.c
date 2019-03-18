StoryTestFolder()
{

	/* Clicko ntest cases folder */

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(25);

	web_url("execution",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552625899017",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t58.inf",
		"Mode=HTML",
		LAST);

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_9", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4073},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4068},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3664},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3664},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3655},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3654}]", 
		LAST);

	/* collapse */

	return 0;
}
