Next()
{

	/* click next */

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(9);

	web_url("execution_12",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=10&sorter=OrderId:ASC&_=1552626086796",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t111.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_20", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-713},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-423},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-423}]", 
		LAST);

	/* click pass */

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	lr_think_time(16);

	web_custom_request("execute_11", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20241/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"Body={\"status\":\"1\",\"changeAssignee\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cycle_12",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805433",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t114.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_14", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"fbd75331aaddced15536192ff737cacac3d9e2744ee8c8e205240c48bba71b742e46ac664bc9c1c3320ceea7e70e4ced29c8058014509a3fc2c9342f54b7340fbb792203514cea81415d12abbea3d7d1bb682ed64c80ba1f9aa6f58d59e154e2d45bfa44b68d280fb05cf0196c7a0b7512edc7814cf47425a123e89dde4c02fa5d281aeb4eb6008f049064df864e16ade45aaeca0d0519a82a342f426ef78a84c96bb0b356ce92d427a7679b524b458defad9abc0b2d31eaebe65c2f9db6f3469fc3da63dd9bc5cd808bddcff3c44eae2eb48eafc3266da3c258d8bde7409c92b1b858e8d13de9fb9fa1c5694c6db3190347ad44ef92998fa2990b"
		"6a51c98490194b654473cfc7867e773794d7570065d14ce5288d0969d820583b1d4ae649e062ec74415b8df3078c3adb5ecee43d6c969dc668f47dfc6cf1eedb28c98d264372893dbb4e62d5d584a5fab235d21abfae63c2eaa939bc983c7e6fc8ad417dc2b74f930a0bd8628c698722454dd912bde1249a45b37aa404cfa963467816981657ce85eee58b509ec6f6c9a9f64b35a1cffe30f764af7e39585ac30966d318cb96c5101ef978b8631a359c5a5536f674c85bc43fb5879873afe14d51c429402b317101679763d4d0e0d6f156e64f6a53853400946cc80a2024f751c61266fde91b0551c1b9e1c218a1d0783940faf9a09f17322e2ab4"
		"742de3e643605cbc250b256d098b2a1e848f674fde9773030118d1699ba3c1caa087038f5bac0aeae4c2b5cb084921969627bbfaf2ac2fe433d4c1578e4fd4bd96a28debc48dc84441af3e74411514f7183b96b44cb0118a6669c1d89bf4c7dbe85ccb058f64d108818ee8e2b30b12e49d57cf8e348b790eae47df2d732370e756cff30a6010eb235a17622fd458c54abbb3e72bad5e81c950707f3d4c327149b37a92b7b79f5e4cd21ba276a7bc706052c811d75ab955e4061a8856a8cede54df0fad5ce7448e3be13dab56d708bffb1edcbadf1b8bf592756340262d7f52007001ab12ca762d0f672259af090656eccf367df895ee78726c981e"
		"c83913c55e6a0aa76f2c4c8b8e34244011beade72f796efa2ef5c39251891686dab9cd6ce91d93e2bf573d244e86c769c6fca12158545b61cbee01259f2142c02ae1180841271971e19d20ca631c237eb24fb87117651fb1e4102ece0866cac43558fe71a93cc7175b612dbc53f2f7b4d2b0f6a69ebfdcd62f7042d2241f8e763fc440ff5ce12511e4cef4745ea53072c65d15e17b6d6f0acab258c79d2cd04c14e7a49e10a3af5d08a741b2732622762c773b6f333a0ecf5301f7a7fe9fc9e35f7ac08f401f3b185c988dfe8921aba5fa08e7ddf4a38adf14105bd8d69153\",\"key\":\""
		"RcgRlfOJ2kxngFbN6E9hfL5AkmlSGlj3aWAZEOtTKtCXMGY9EhuU1aPnJBWn8JhH9vu631vSXu3oovFz1r6F+eFVcazLp8UO0raP/iHPqG7DeCx6LdKISkUlZ4AKBX09hZlAeP78yzpk6XneqFTBXS2JADQAZXWIYqBVi8KL25g=\"}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("execution_13",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=10&sorter=OrderId:ASC&_=1552626105230",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t116.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_21", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3172},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2852},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2851},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2828},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2503},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2503},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2206},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2206},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2198},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2198}]", 
		LAST);

	lr_think_time(5);

	web_custom_request("bulk_22", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"browser.metrics.navigation\",\"properties\":{\"apdex\":\"1\",\"isInitial\":\"false\",\"journeyId\":\"cda336d9-96b9-4afb-a658-bf7eb3561c45\",\"key\":\"jira.header.menu.profile\",\"readyForUser\":\"0\",\"threshold\":\"250\",\"userAgent\":\"Mozilla/5.0 (Windows NT 6.1; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/72.0.3626.121 Safari/537.36\",\"applicationHash\":\"9f5725bb824792b3230a5d8716f0c13e296a3cae\",\"environment\":\"\",\"dataCenter\":\"\",\"rack\":\"\",\""
		"manifestoHash\":\"\",\"resourceTiming\":\"{}\",\"experiments\":\"[]\"},\"timeDelta\":-3961}]", 
		LAST);

	return 0;
}
