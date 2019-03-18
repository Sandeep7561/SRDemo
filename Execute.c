Execute()
{

	/* selelct from dropdown */

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(52);

	web_custom_request("execute", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20231/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"Body={\"changeAssignee\":false}", 
		LAST);

	web_custom_request("cycle_2",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805423",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t61.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_url("execution_2",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552625956230",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t62.inf",
		"Mode=HTML",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_3", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("analytics_4", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"2ef4e94abdaeaa2851af89f5240fc53918125f9a298b8da7255becdc2a647ba26e5557d75a1d81dbc9d1dab87f9023fb3b3b4bf7e3d616201f1f7050495edc31e4fdd380bbe4557e0556d30caa6e250000c8bc43706f3d74b7b3c056e2449e3e09ff45fd975a1dd309cf8798bda22af7e048adc2a17a89de978851cd9ffef6b90eb0ce5cdb2d139933091c4ae311d5461408799eabc930a3aa1e0ee1c48d2f7c729e286f1eac11baab3e593938c302b312bcc43c811e3519faa6f8aa5a77cbb4eafce490bc411f3b8bac51b7519183fd1f10547fe8a3d7111e2a5bd80f0bb6832ea12b3031f8edca603de74de3a9edf5aecbbccbae446ffcb9576a"
		"a8f290578a5c061946bdbe424d8b5a4251a8411e11576ddc777cc849e5d5c2b73e7730d5f2fe2d6f26cf13f4de2219a067f4224432246662af26bf305c7de5aadf4f842e105d9b5045495e02d5475e1894e5b07f6680a20155319760cac13d59b57f4f7a66034be4e44055683bd39db46102fb2594a97ea1ef368b3637fab2681865e78e0e48a9d13e71cf437e10703cb1bbc51d05de5bf022a5cc60fa4911086edf4d222cbc1000c0fd1bc34e3538e8b43bf5b8e555f15cce393ec1e55f9e77ff13c8deffbe26a4ff3aa73b843d21ac8df805cb29a89c482cec2a92451e460f38b3507a0611c6b58fd859f9df46167f42acea3f40689f9a5eda9d"
		"e18b8ee7085fc1ae9c74af036432472c8d2cdc3756b3aff74ba0bac8d87b441790d240971300598078227b2847b7a78dc8f1cb908d31fa3bca79fb0af4c0f4ed65496ce21379302f6c5ed968e1eddc3f9a027568dd27459f9d88e1c923ea54d20682949cfacb17a6435ff0a5c7af0f03e2ce9bb39356be326efdde0879d540ce78252b79ebd683bb9473d50a3dad3ab00e7e443593a7155ee663420d3e8e0cf13e3d751402da99fe5bf1a62ab086ab8ec0469206ae90f8c528a2c8ccdd161f5b20302aa2ec20c3402977fd5e5c75ec9f83f6938e4a87676fbb124ad4243100d4d96858918d777f28361eed2448412935ec831d287c0306fe276ecf"
		"5e1fc153774ea16a2fc9121ea8f5f2afe239ddf1e19443bcc7cf70028b4b0460698263b4605d60fc94b2f3a026afe0f6d2e54042c8588fabc15813c57bed2e31fba16874c3b1bc2e96a8fa1c46526668ed8110c90ec7bd28a9a7c4845e97b09517b99a2d5bd8492277fcb4b7b07eb465beda7d79525da9cd6e689510dc2540ec601dc2da493780bf250b75c18130dee088084e49ec79909e123268834072daf3afede5df10d3a3354e3fa09c9a2f2d34d62732e1d0e34f212610ddecb76cd4b4dfb411a77f0c119f0a507a2aaa2404\",\"key\":\"HWcwRrNGtWQsQZ3VIiZC4NPD5GXd3iYIpM6gotjYdzKBNV807FrZHP/"
		"SMxjUJWtScveSogmYx094OD+/QyOzyVe7d2i/9alzop8tHvTfoP7lcj3KQHCFPpzknE3YlYneu/mQelwhu8oefVefzzQq/6ebahvAwRntbPTDsd+S7ME=\"}", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("bulk_10", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3053},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2714},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2714},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2664},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2127},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2125},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1847},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1847},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1837},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1837}]", 
		LAST);

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	lr_think_time(19);

	web_custom_request("execute_2", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20232/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"Body={\"changeAssignee\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cycle_3",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805424",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t67.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_5", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"bbc611810c3c25f97c639f8ffa944c71c7aeb7124817cfa76a980880d8742ded45a41e3c1f0e1a57bf93693994a2401a1c2681b917079d199a989335ef20201d596e918082dc6c50c94ca9f0c9501b0c9fd4b34d645d8fc803d687a28c4a618a21227de6321d31ef1aee3419595383a4f48f0017e9977be94a802bae4e6e94306bc85dc11ce88c60a799456b1ace313989d1da9c38d70976d5f8f0310a9aaae51ed4abb6b489df1aca50624fa6597c776eb52483eb185cf7a104254d815bed8aa28295c1dc134a4944fb2f2ac08e9cbf5fb8b6484a562b66bf70932c2d8518a47c18471fe3c60978efe2c99ca292fb78bb0767e2955cc6caa4a02f"
		"3b44aaa802eea33404dfd40188fc569da45f25557acc75e8b8786b6b9123d061ef1594adc692ea85995abe0d309781ab7a1e73123b1d8c813337a014925400c28fab5f3dcb4de175038b7895b5d0c2153320de6273e0f8484de10752acdba50161ed28568d700d2ef1505351a523950e0e3315e88c1fcb48615b30013f738d67f142d0e8ad534f7ba0db66073ce573c7d463d9733e6dc9ffcfa32dd0413a1af2da77131f0b356fe88b42ac20e7629f748c946a654bd4421f0fc6d27349bcf48d497b04f1464ed2655da49767b769f4e34005bbd2917d3882652f6b0f9ca481e0b7ecfb85759246ea338f321067652002d9f9ebd7e93877a92222da"
		"5d4174c8070f2dd127f599db229f33defef8748b3c697dd40d63c4a8688253d2129eaffdee0288f0dc6a9f9bfa5c57425b9977be72c16cb96d35cce6b1d4453599b77b09903bbbc5c6d4a17d67641646521e9420855ee2aedd459cd556b7ac3d83d9e2704b3f58bc2ce31200a88cf401053995bc59f9eb545fb8d37e3dbc0c00e903a9b229921336973c0809a455222c245557621997eb1c6f2ae097fe151ad43f457112908229f01ff268d0f8addebdfed8601858358ec9eda70f92ce67bc96b9f5daaed03bec03d06ec32d24d83b8734e3eb3459aca9dd06cd89561b9715fe9c91f89742bd35d6d0df7d69589172d5dae4f19d18e7b1c0ef7aa6"
		"ddf6ff552b17024b63773fdb0d3dba85de5d6655981e9e2e3adf353af7e7095e86dfa5e7a34b87ed88a7e2180707d9cecd345a4ad6c6ead6fb65ca7da6253ad6147ad5ebf59321d037e729eba86e03451f4efefaed38ec913b27f3b57ee760a200194c7f53e4ec90ca848a8eacd9b4d7aeb873b7a2451f68a8046103cf64e9506680620f01e1e1753d0a48c2a00b9f483fdc44efd7ed25acda3758e16f700c6885fd44f2839d442a1b3c3bed63c339719219661638bb2486c7735db696bf17daebf4db26847fcb1241d0d5e501d411\",\"key\":\"CUTsrs1h6HUp4lWOOgKxQ/rzdQhTq7dRTlmsPeWOs0k9yzrS/Oq9LRWYpwhPzerJj2BZtAmn+"
		"9tf0zlXqkME8n5RU9ieM+vtcaK/x8qQx9aIWnMSPoQdyKxjlOEpUaDRmWab2nEqBlVdqxYLRaufcSl9Ek4uprXGsYQv1qoAmN8=\"}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("execution_3",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552625985799",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t69.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_11", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3555},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3273},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3273},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3239},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2965},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2964},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2687},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2687},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2674},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2673}]", 
		LAST);

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_custom_request("execute_3", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20233/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"Body={\"changeAssignee\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cycle_4",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805425",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t72.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_6", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"8e0daeef9743ebd54a49f5ce4dbd408e90c0b1b11e639ac0dac5aedfb0c5d98c1224d5ad8e1ddfb168c72e7046e673881e5057591f63edaef29b1f26e9c06eec8938a48a20cad7519fd55196bdc8e7ed02deca2c240267b710ab72a7fdce4e3b0de6e7ec18f7323e60289dd0340727f4b289fee99cb6b09cc7c858afe56a730a55ebf78f93c88ee158625f582292e9a72d96ae1178af62565042a64a854fc16610d8a5f8e4865ae45e49d1ff1c9581260f1418b75be45fe7626017cc70bdce157673a9d183617cb32933d0070de733c919b16d3510d056cc533c47eb317af2bea58689d53ea318fac8878597916b4c323e6ab9ec49f8afc00c73f1"
		"8ebe71111cdf986f0274f0a9e09d41cb0030ae8354c3caee7a9d11567826e354e5f95ac1ef23c1a1456e685cdf85a130023e97aecfde6f65161478338a351463ec984fe785eae95f4e5e944550e06618b97dbae7f240f72db238cc781ae7ce4a21b33ba613568d04d6499c84991f42a4596a72f716502ec91a9f6960850b3ad90fbab561c3d4fdca2e7fcc039853cdad1ba9cd4bf7c7604ac9d3f8863c832bf93625935ac3d8d0b212d6274564b8061a4a969bdfb3d2a591ab6aa59685d39d6906792ff38959f07544dd710e3efd2f2d1c51e9105b4e6a1ca0f1f4fd12de2c62a30858a330001416fc6646f2b8fb0118c51fe9da60b127a30fe670"
		"99d725db64f1efcb4ff3412ecbc3867ea98dddbbcdcaea82c926d0a6f55ce12e375da2007d4f61a9c32d4ca147fbefa3cb155509182c166a1626a611f06e985c4b0019e486c715ce743f80f2cf6db808e6ab12a32c38010e51adf0126398a2c3523f291495156cda99a42f724a4f07feabff267b5b93537c3898fbadd97d50dfd68cd37d5a0379605d0dfff1f7546558884c7133f1b0cb7ba7c3494089adc2ccbd4f56248470beecf191ea825ebc511cd2df16b8c2723328ead696182356e46fd483a77f8fa62a418c63db47e79274333041e41826467a7f00e7ff7e44f827de98ee4da2ad2efad622ba7215b4fe590db1e27f106b22549a727174"
		"a0250cda88efcc1cd2e6aec3e51726d184a2b71acdfc982f0d0c7145b9421dc0f57c9facda6621b7628c67a65ada3ca4110e452b4fca02cdcf04e2cd35b34fba0b183468f073049321233d7f4908de1ac672751ec709ce8019bd5867b613937995b4caf8a1dd5691c456e1637d4d00d07f1287098d524ba9146c8f3d70bfdbf0d90113e87745c67f86237813f1a126aad3dd9e35afa1d0940b20fa8fe235266f3139f0a5e04fffa11a528e35f0e706c60b7f89efbb3a0722b9481f76436f4fc8705f6188957c424490e21485acc4be\",\"key\":\"O+PzeOOBVHnoEFtlVJgihq0Ws2pbyQP3obMhdaQwGk6qKxK34V1C0x1a4do1zl8Fb0mdkhrGU/"
		"dTAIncNGG7l7LiCsyyny4Md43m0bN7wjUdM7HEuAIPvEhENA0jQKad5/aJAyfKLYJ0UGnGpJXZoIzFIDd0g+neZzNjllVGfnQ=\"}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("execution_4",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552625991328",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t74.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_12", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3434},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3158},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3157},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3135},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2857},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2856},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2573},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2573},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2569},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2569}]", 
		LAST);

	/* pass */

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	lr_think_time(8);

	web_custom_request("execute_4", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20234/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"Body={\"changeAssignee\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cycle_5",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805426",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t77.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_7", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"e70f391aacbaa8f14125dd04bdeffbafa264bfd67d300ec37df33dba0c78a7670711f465c1e76245cfba85764431df4d4b8d8289913f3182860709e65fd95a9b0a91abaa8d7f1b739fe89a86f489af8d6a6c2021e196538a06b29352896e916fabf0b8e8837abd38d5d310d8b0017013f8b2444616a5f2faf0d683fc8e743e2dbc76f89aedcc6f499087437746e9f37fc372a71f8327f191e4939254a42f448e9c7e83d674957d640890d8b7e8a916b30084703998f7acf1b2e6f52bc32d404bb8a1ec7fde08f79133203589d720bbb9e86476629f3aee0b032dd9440a7c371ea43625305b4d308bf795177d68f4711442fd7ffb3b2176ef63c2c5"
		"4e3659df3eee363de7cab3171c6ce991d3e01d55ccf70822b1edbc072cae065df78a5447d974eabbad24939f4eed4a45085a01fc189c3ef38d73bcba13f73514e24508c1e883f29071eee683cc0da93272541dc8f6d1e9ecfefb814569f042b550346c67c6040fe2be89c66bd0abb58f1b0166a9d744ab86cdde96994b1c69242feb88b18ddc8c3c5eacbd252f093c5feb089c321637b62af973db263f960fd350d230b546a84eb684504be271c81eb202d355a1a702a341e4ca8394639e244d92027391e922ecdc331e7c6104b71f2093975f86fd42b9d57b7e902c5c7ae35ef359bf9a979792f7f7e6e16120a0ada65e2086e95acf36911dd5e2"
		"9008f064921d51062d9ab003dd859808e26e4511e68b472e822376c3f1d9486a8275fab7057cb7f031e49642138349f35e803d069c9a1a207e82c06822d886a70e74744b1b937efc4e4077e3eaf07506ce170db4c29d36961a8d9dbadb46c6c57ddb497e7704bcb292190a871d72a33232eb0273b2cee91bf276047bf037ec14e106fcec1b300334a290d150a1546760014892eb74f8e49d80914891e59cfd37cfc68b229e986990f2b73e24a297fabbb9164b935499d456a93a86ec3103497ac916d48eaedf6cca2185727be6c99d9b6cb9b8f396a0de3d798718c3b5df9cd7f1ff670c915d98f8f8d196a0e00b2168e8d29e153f0f0f986790e7"
		"30e1cd2eaeae1a254b4f9ec29658f5871f2b45a0f373f6202f3576065053a8b36afd8d71619c66eb6055beaa489879840975e15192b88cb7e1336dfbfceab34a4dddcb2334f6fe03b0713a61133f985296d450329daf339bb10d67bcd6166c0fc3e2fc17327003e6d2cd19e39afca5042e62be0199bce66c0fb95c710444af7199b6e4abd835fa035ed13cea92d006656a15aff9ca8ccd4f9d31e1ac802b08ba28a092c2447fd429ff49293e81e59c01196082e36d5e864417d15ca6fde102ea8f970cc3eb5081bf891a4a5b8f597e\",\"key\":\""
		"HVJMISyMMEullEgriOhzyanKfKjieXoVgoCmgjxUYzHx2aIwrGsygxC1m19imxIL4mcwkilt1DGgCzxxNZbM6Su0BCmFjfLKGxirzE8tzopmf1gsXzksoB9DlhGVKWcMa7wRMY/+vnG8Zx5bRrT3+qoBo1wFa/Iy8v84eUKAUq0=\"}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("execution_5",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552626003511",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t79.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_13", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1681},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1392},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1392},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1361},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1079},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1079},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-780},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-780},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-768},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-768}]", 
		LAST);

	/* pass */

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	lr_think_time(7);

	web_custom_request("execute_5", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20235/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"Body={\"changeAssignee\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cycle_6",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805427",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t82.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_8", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"46abdbf45b9f3239522d16e0d2cd29153e01ce00ab25f48a11960bb4fb0ea3d265b1783e2568d584a006f8a2450bb80f60ee94a925edb46752c62a4deba78416387208fa7f8fe88cc00b3d156df1a301455313985c0d2cb7457e8263433daaaa456dd785c5ff41784f39d4ceff6404882f26b18446d6c3cfa819f3ffc60c3d1b6f83cf5d5fe0773b1bdc857541862ac7866032d5d0995b9376214437e9e9506c952b2762addb6ff8bc599c027aed50e4e9526efcf86fbc2634367d1ac7d540a58cf9e09c07377ec1ee0c07e377a7ff0d63ea446a0fbac2e86569b6ec991fd3420df20e65e885e1866fce8ddf92bc763a64a86c63563160fdb14f92"
		"7cbedbe9508a93e2c09f0b332b18a6dbc525b9c56908552e626d8f240fdf60ba920307da69284f8bea4afe852334175a7030ac909d4d47c04c70107d49c9d5b7824e5ac275d73128a41e36460cf7b8a896b98e96686ae32e1ad99a8496e3f0ec5d46a2ef0b0e3a7876343dcf005a3b379944af075a67cfe54b7742ae3a27efdda299255cf3809f60ec229300aa70cdec92832624c765990d358e42876f03c191aa72ad11c35510774957f03fe2041c6271c0e5b14227827a2d5f76438781fafc445fe9c07749374e4e08b86d03741fb8f268f1fee927f9d086436f5bb3027fe2fda6349ab469b602b05d01af072c88441e24db233ab3edca85138e"
		"b2c0152059e4814caf4fbb68ddd729f7c145f4c24d0e4b0aa9a74492a785e9f6349100a89f42d3152a0d946129fe922665022b882fc0764ef338d7d6b02237c3537d21da8e1fcaefffbfd17593c568c82647bd9ff95ac46ab04c169e1839a99a1157ca71e4ad1d9222694d25b19f6138b80ceb5f398edf625b224805cdfe7b543ed94ef9929ff7dd2c252ec3eae940860eef7325d9fb70be1f60ee6f036236302a8274ae970c6c7c858988e87baacae5abc423ad5abaacf0b73296a418eb6a23b2b6235a6d53aea2ed00a5969138b3c4d5b63b2161ee2720cdf2c2ebb9b2fd258acc8096a6f56a74e67557d50b69998301d4af5d7b8da77dd25e3e"
		"4360f172d2bbf7f58f6a62c8e23908b801ccf8b689e862621f5b9a5dc52a46f4348ec37bbfca72bd08058390dc0959b1cb8dd33b1038a56271a44818a31c903e8b4f566dd9be261be17de5dfc26018e1e37c32017f7d9baea78a0f2d5e41625826cc24c57a315061e3bbe812714b5b60c875f73a46cb7bc2e6c429d238d1f429d0f918d474339b87db6747e10f7d6b816f56e794a529981f6d3c9ae344a572517155e521681378e79464b776675a712c204bf32acced4cd7aeafaf6661e3a043dc5c541ddf34cb363f4cebbada3fda\",\"key\":\"EU+15wmd3M969iS3n/jQcnuaJV2TFHTQFs5/qfW/8ps/"
		"PxrsFc1tMJh4ToLtXbDzSKzFup88yxCCGGylR3G9OdFuKmB+Y0uK7GCCCJbhr/b1uWu0FWjQj3yPuvfl+gr4VQbtuQbIvdXl+sPQ/wcrZfoI6rBp3Pv+iskpedQBWv4=\"}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("execution_6",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552626013647",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t84.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_14", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2044},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1642},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1641},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1621},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1353},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1352},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-946},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-946},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-941},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-941}]", 
		LAST);

	/* pass */

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	lr_think_time(6);

	web_custom_request("execute_6", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20236/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"Body={\"changeAssignee\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cycle_7",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805428",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t87.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_9", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"24cf04d30fd096c9c0148f6b3a5770b651010647095a9bdfcecfdb636456d896de4e0305e892fc1861a94955a52278ff2b3391ee29c5efb872c2a2d226b8bc6b0e9dd15ff825c991519cc78fc98bf2407b681636388f4ba4c894efb8f5865f68bae6e5ebc32b51e74035d8cad39398ca6db7ccd1fcb8d68b6a40a28c9d40be3c4f55dcac06d5e19d69977cba63aa4e4006b0b0a2fababfed8417a7b608bb540bb8a3e357fcb8f9034d51724cb51b97e7c98b63035ec6ccb2b91ba33db3b60bd3c0593a148bcda770b2651099816603302106e832a0af9d543a87b0e1620a5a013a6c2ce80669f9c85a1de2fe2532cb3a6db10aa1d39a32f4c19f77"
		"a2b607e3d921eaa3dd09da9c124a7f8a5547094ead08cbc351a4a83c30e68309e1dd7cd1c2eef6aa7c9dbe417b8bc7e70bbffb8c9006f00af9d0715821dbe0262abc5f1237d25c2fc226ccddef090ce01b1fb8e8954e93e03137c6e0524a153cc0fbcfad9af00b74ea671e2719b7daa11b821e5f1a439fbb50f0a02f2f53e25da0ca08f8f19ca9fee0c06384e7f1e74d162d6ccbd4efd3771110a29c70dae33b8dee9e0aaf7b5264486944e30de09109965d48c1dff70dae94bcd99c3cf72e3f3ed3840ee257b1af1fb440d2d219826895135d124f3d54cfd71bf546344fa5b5bd2ca155837e2e9e62b13f330da2b56b328a7b5d6716a4220aee68"
		"4dfa76e8c82406b8c33805463597a2b5a01a18b256d42e072a430d992c9ea6e59b1ab84ec55995c4edb8e7b5256f2109772467b8a0f37322fa6a3700eb3c3952c2b2eb9077371502fe3e7cbd405ae7fd41f3751b07b3d1df92fed2f167593a4e1eed75b6272a97aedc469120cf6baf72461c1f4adc5d6ce302d062166e124d2e0c063ee8a015f3639d36bf5fa9ce420e88fc3ab644c6eba8c91698a513629aa23bb85abdd8a1d43e8773379b538957695deb559bf3ab5c880873a1cb16ffe7ddfea499e04c0dd22baa038ee891eb225661de7e02d11cdf61fb3b393d26623bfe7a0877a964d1267100258115743093bbb701d242b2e66a466798fe"
		"c76e95d0a9dd86937f747e96ef79a4f98588e7e454806bfa62021cbe122458c6ae269063156057fd4d46d166b1d8ce35640890e95576a06bdb01b274e92759bf19f7e9bc449142ae8f9bb8af4465684113b542a699d66db57b2d44ca9ca0263883cd21f2260e65cf10a4d004925c207120e462864c1009406d743805f69c61e0ed627b9d12602e4ec5967227cf69c0926dbb2fb4a94363abacb5b62b249dee28c16ce5a88adc6352c7cf4db091a8736be6b7a61ca34605e12f8ec7eb858309af3c711ed2fc23bb07066654d7d00124\",\"key\":\"LivkQwWg1k4yCXf72CYDPPWwh0BffF2WrQTpIKviv/GDqNV68hI0LhbmERw6iK+gRgS+"
		"ZmAlZRzOy9Oh2W7cPnoZzFNthAcKBhffxfl5UwJPWYOXKbu15e+daP9R4jl2SOYQJbuGbrwvpKleJWLh7GHn6yLoT/wbpBDKbPZF484=\"}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("execution_7",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552626022428",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t89.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_15", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3571},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3303},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3303},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3274},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2991},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2990},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2709},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2709},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2697},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2697}]", 
		LAST);

	/* pass status */

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	lr_think_time(13);

	web_custom_request("execute_7", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20237/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"Body={\"status\":\"1\",\"changeAssignee\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cycle_8",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805429",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t92.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_10", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"0095f5d8af512e683126fbe211495b9aa19e97a9e969d9835c856d552c9b7bc2619599dcf908f49fab7498acaa03563977ee1369cd89f4ce9d8880f0a64011fca4cd282cb84387dee9298ae3452162e293c0f959804dce367c4477589b667990b156f7cc8a3c665bb7d4c3630b72d38247bc1ab32a8748b9dd56337d0a76341cc83a6aa1208f576a80817c8c613b0ce3283a4a26c61479a33a490d8a4edcd5160fa58dce172285eb2ed98a2cba50322a162e0c31085da01fbb4e51cb687d00033f5ee34e020bfce9018f0d2ba5cf850cf2247bdba640ce04d286363b4cba8d9f5f1cdb3996ee5ebfa4c0d9a192c97c5e7f8c827806a5418dcca4f6"
		"ff7d102d31d259664526c0f1a550c97a2740f2b5ef34d84288f8c9fbc51174aefca6475f21de5d18439366672a12946410daf96da16d9d8551dc231b9bab81adc4960dd7dc457a5b655abea49d141065c65ab5e4fe63e0058f360a0809c5220fc71e0d032b81b7e980783bd9348e1088b49ad8c4476520fd533b5b7590f6e305f42e8b2bd8dd79f2eb7995cd7518f3cb3cd976bd68cbd6724c96aecdd423e23db04fe4474160a2abc8aae8eb0bc0a93bdd60b5067e795433caa2c64b98305c1308440750479db877c38ac8c3a7e592d08a748757b356ff5414ca34cc005a00e4f934d8328ddd1d92be6c98fc9a78849b0b6fc1d11d3695accde284"
		"ba2a7d4a7fdd96e5f28f5f300e4bb06b5c6742e8aced137f80c69d89a216d5d7e340d7b3a736dcddcd6fa98f525ee55dc12f85d977e0de87bfc4b0725c05cac56e9b4c2ab8386c9fa40805bd716aa7d62a0699b10da4a0b86a968a570e149da50bc5e2aab1843c55c69b3740bb7e8f9834e159ca688074f8fefb21f92a48859166b86cd510712a997e76a12972843a379f1adc27805c8fdeca157c959ef758518c77df78407997cce134683ac308998ff639287ceab6f56d9cd5bc1293f7236278ca2ed4f95adb64a4ce460a89447479b23913e370d0570329f895612cfc12bc39bb15feeaad36c9f0cd818f4d49505716a3c7a7a8e8a2e41651f7"
		"3a6f04fa1f06d1c1bf18c11632fef052867a703b5f430ac44dc87358bc8f53d30abacebc679e98b364961367627e849353fe7c8b9b38880a01bd86a2ed00a966ec4c569fc53b028860686d91ae5400bcc33cffad83f70816af92e605853b2e1a73c742950b1c3f9bd8d1699a9ca2e6f97cab78d6aa60598158b826ddc02625a08e90f43b2e8b374e1d4488e1918d2e1b92e60123c1da02d23f95d3f5a2f31551f4ee9d42a8a31da5536057e58d45bc61bd85367ab60857d9edb986b794e86b6aae4c7719bf6401e4a10d19917474ca49dc28f79f9fea029639949c4a5ba7ab\",\"key\":\"mo/+b418CknaZ/BbJN6D+DwDakHHW6+MjYq9BJFNn1/"
		"DPHIHebaVw7LZxKIljUmabP00ltpxna5gxDZmiBe8ivB+xomM9bUxgEKJMOi3zDrLAVLaKqNtalzlB28SfV4HRSK8v6w4V621/Wk0Q1fEnFgNlNKZtbbdDhWHvvm5NJo=\"}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("execution_8",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552626039941",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t94.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_16", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1768},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1255},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1255},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1222},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-894},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-893},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-581},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-580},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-568},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-568}]", 
		LAST);

	/* pass */

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	lr_think_time(12);

	web_custom_request("execute_8", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20238/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"Body={\"status\":\"1\",\"changeAssignee\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cycle_9",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805430",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t97.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_11", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"b1763ff775a3bd2afbba1f39bdec6640986e5bad2e982bc324b8d950b532765c12f65c7ae7c3dda9f3a348f829c1893a0e87903d8c5af92bff5a906b0a077a6caefd5df125ba7661be19fa67103acdebefa4c2fc589bd69f50c3ab3c79d90b5d3f56671657395ff00bdb186dacdfda273eb5fa9d1be5fdeeb09e3653ab0a5f8e11cb60bbee6b585c44cc0ff8b3ea4943eb954515b93063d297f091cb377d0c6cb3b52341ebb2db4b27503d10f9e21c890fbc3ab0d60adb890cc1155870d04d6c30d9aa3252c9798d15c7e7708d64218199d56eb37473c5170b9a3f2a79aed42d06a836626fbc11ee3b97f361e38897b12af9245a5099e693ebcb44"
		"203832f0d49dd62d18a09c480cad01dfcec56dd44f344eb6295aeaa83c14209498d13f2d5eb8310366ef53cbac7590e9bc980eeea6452eacb17c1c766de867ddf2f8defc44ff1d6b356861a375cf6da46239f382f59c678eae5979e85ad5edeab6b62367c2c582497e2155764ec1fd76eabd50efa8069c13768b02f5856bbf0b8edef443249e65d726a96d7116badc9e26bd97339fd98ef0b7cba94ad4ac1d1fd093a07827f21aab95dfeba628f3d0028d6a8219ed1803aef26cd8a957448e2e84019c89cb0ce147bbd87afcfebd7904563196302a16def2cd7a7248578363ec2b9b4b8dc71eb285af4b63f6ebbe7433638d5b2b3cd27c3efc1eb1"
		"f74be384ce9b156aa9683e99baeb6d05253f51d8b31f2941e4839109cb83a17712165804e2eef2969aee79e24d67857ea83f16406d2cbf788f0f70fea2fa2ace169e83005fdbaa62f18e48be09101d1a79fff90f2a25063cda22ef2a8fa0043e79cc1cc83d7630208a3f3913bdfc00cc07a9fe140d412d0e7d8fd651e303aee343fc3b80c739ebd4239885d26d16ecc944481beac8f7e78aff8711ca310e5a8198a7e78aa7e321a2e11520f5ce462f73a3a2a716eb44de07b69472176e3f365c10371b97f1b1380c3875ad523f6e4276b9c29a926f1f401814366ea5af033820c416a42250ed091743ca55b31ca17868351f2c634633d29118f4e2"
		"fa6e9bc6c5825a9c151615bb8098a75c4a31a668b4e2be14b5f3004533b02a13276a7bfd145bbcab6cab7d9c712980d813115039b619a41df0dad0e0de3d1854ef3abb6888f1e03be15eb301ce7ed56162a1a1090d772eaf437f32d65ae6ef2bbf5229e36e199c7843836a82848270ed60f207fd60d0b1ee2832289dab7b63c5aa40290896b89c465f9174b6ff52c9da649579a7d7f705461b6a8b881b36d656584ad521ca16eada1e882c737b94031b5f1f9cbd768d6acdf24dcbe8e748b3594b0d2adf604f4af2bdd037088d159877b8eb54546e619abb78a09556b1804e\",\"key\":\""
		"kHzpNQclqTMP5jyF2EOkE2KUnY8rkpUcYSz0h9Efgct4oqjYEsMXh8JtINXqMNFXChFFJuDt1wIc8fIbJ2D23HeUXKGIo2+QFSbLHuzMFFB3U9rHOQxtA0FDznRBnK/J68sCiFUwCpQb4W3vrynizZxkiR2HuNYXjTjfRoixXhg=\"}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("execution_9",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552626054043",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t99.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_17", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2888},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2533},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2533},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2500},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2194},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-2194},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1923},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1922},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1914},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-1913}]", 
		LAST);

	/* pass */

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	lr_think_time(5);

	web_custom_request("execute_9", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20239/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"Body={\"status\":\"1\",\"changeAssignee\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cycle_10",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805431",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t102.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_12", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"dc59411c52b648df8f0915acb4f4d6a305dc3503aa2a1c6d71f6ff4979080fe7e37c8f589eaab48aa3ef57ea2fc735755757aee79aed46e7f5f0d3f30b9637add47ed143a34cf18e13a38e33a1ad8b8ef6aa824c5254e11ad12bdb9a843cdaa7193956360c49df55b7d07378e5a63bd2a95c65bcb6d50ad2ccaf099a286cd60834ac3491f9c1b22b6294db62c7b6c8349d13881d05d783922c736aea76ec3680ed0190e8f3ecba1163e4faade56a50067d28814f49be9fe144b8168166a8f463ab1eac5dfcf17448ba41b9b8246eba7e0832006045afecd252789fbb1eaf822fd3dc8995c18e9c721ef789d417fcc99682be85efb037185f44355b"
		"3cbb651acf1d07b6a08ef94844de87839df71c236d31315184d57c31cd2d36936ce3d118503820615dce77dafaa01baa5148a1657ad5d787f7e0276a4d9af4e740152b46b9b596ad8801914d9ac2cd5ef5940b0d1b29a46a70b6cd1cd76e502900cd2c86100ddc5c4305c148d791b8bc83bb7aa8f86cb0d4dddaf641ff83f2e10b1768d3ca0f2135a2132472b61489542fb3a94d15c6c2d9d9a8bfb60cdbe2e32a400d4683d4d8455279ddbdcfa229af898502cfb4634710fbb914955f3cd1f230ffd293cffa85582a0ec8d95e7b0a43b11f9e9879fc150ef07331b7f06cc8d7529cd7c9189b5bc5ee6a65e0678e589023e8a586b2c8dd794479e3"
		"e8e5c577c4c32fb8776e1e0e494c0444b253f84e6c417827bec8e3e7d2f9d144780ba7820298dae0c338380c326d5a1bf850ee4433c4fa752257473c16179c5d73b3201488c729ecf909ece98a4ad2efdc4a76e7156b7e7ba1d63ed95255ff689e5c186fa6c84cf5a47389237627b43f9cd0dda73a21007d3b5f59afd381d01168844868867c2d49aa157debbbe6d9364fa51d157a505609d4f8ba162b7dc857534c2020db835ec59b69b26bfddf52bbbfd652b0341f0fe5d40574552f558383412fb6b488d50bdf1bc96cba233e6f55e491444ce3a9a7eeccb51d78f60f63aedc7ceaba7c36ce40e5046afd83f60187280315e8d8d615d7eabcf9"
		"5144ea6a0fa0fde5f77712da7457924a8769b3722453617504ec1da5edfcf71d6f28abe844cd21fd1492dfc6acf03b07d4926135a4e4612694dbf84a09761afbcdc4cc400c7ef9885159f0b24ef125db516fc64f172f13aa03a5340cc67e940d1148eb27c1e3e7bf2c57ab9f204f244526423738bff67f14bb221fd7185b9eec41fb54a9fd14dcc2f0a144969363f55cbcf6d1c210aa480bb5174e968b08fec20c0ebcb08cfb8dbd54b4e6e3891eaa94d74ba5a036fbf0d59b5d2b0c4a1ceecc9a7678d6118b9b6b5cbe9d4f0b55662c5c50eab0a96291a8a428a73668611b\",\"key\":\"a4gq4D1UAmwvpXkbe9g80IzCAv+"
		"BcInuFCitFfaeTpO6vkVufG/Gj5ZI/KxZg+TE8tHckL02FBSZRnBy8xvqxvgGZG2xG6diksKwBSTG3WZxwhdjXiH1jcKQ8CAc4MAOnIbJWxEt00g3WQuXoV5prEBLopBjaofxsvwz+PGxNoc=\"}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("execution_10",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552626062948",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t104.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_18", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4374},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4074},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4074},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4040},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3718},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3717},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3440},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3440},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3431},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3431}]", 
		LAST);

	/* pass */

	web_add_auto_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	lr_think_time(5);

	web_custom_request("execute_10", 
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution/20240/execute", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"Body={\"status\":\"1\",\"changeAssignee\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cycle_11",
		"URL=https://enable.lrn.com/rest/zephyr/latest/cycle?projectId={projectId}&versionId={versionId}&offset=0&expand=executionSummaries&_=1552625805432",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t107.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_revert_auto_header("AO-7DEABF");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("analytics_13", 
		"URL=https://data.getzephyr.com/analytics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"data\":\""
		"70556f57dfbe141aea1cc9827677047d8f123a1d577322014a271f0f8bede55eff19ee3a15ad515c897ac803c9c768e8522f65a8d1dba793b84243d3ac498c908be599a9004d199e1fd7132194d0687c31f86ca75cc8b8344fe60c910069193a2c4f2b2b320ce1a53e295f314c54b8cc2ffeaaadec520c1fee28b884e8ef1228048cdf860d35c96c169cc605498bf1e6494e3c532e9876f93a0e8f2516567ada13ffd4dd126a967af0907d63d8ec8ab07b7c6eea506ae43f423960cf435f86a6545aa1a2e267e12396af37c3307e58c934141b4a91aff03693c318850e8bec3bad8a55b33ecddc43d98947a7cb361c860cdcd4739791f6fab3c00d"
		"ad95186ec4a29dd2ec5320be7e36b133b6030c1e643ea784d77b6e1d69d26f352100a366e2fdae2b2801ba9fced86751dd981867a800c87da5fedc667dd583868c03abde209d88152de7adb350501d12896db8de44c12b659d7d67710e64d0308ea6707e006c3bf5bd43aaac7063e241185c7e43a8fedafddae29af9e813a97f2e3d09df2793c9c99b5fce3e6a5c776adf45e63344ca01bb0527a1980b0a7082445caa119684de0fc94af1d8184eb7baf454b2062eb149f456c003533ddbdc2387511d309dd5487464854ad0b6a18ebac46c1371c523ff4754ac7877bbaff295cfc38917a4f3cb2c4de36c7d024e2830e899be05b027f99905d079"
		"d8ccb356648cb0af37c0a860bfde5a0190b4e91da25e7d4bede973e198ee1aa76a635de8ff1ebee795589283934b2b6c4b9c960e2f447e4ccc651f4128b41b3f9a9e5cedbd32cc39213eca4ea9794eaf6868366b30466ea7b8ea817910917c3d405ee20e88d4500f71151b9b3c8548a5da590967f30083ea534af9db7bf35589f200246df827c9822d936da3ec7a3c9df04e8046b500a2abb90d205a72de43645e7d80c0ebe41470666335dfb793b2d02e70bfaecccbfb6fb8652effe7287756b9d58516efbe2102ceda7c5c803278c9d14c72a249eb8a7c78f6e67742efdc54d79a878ddd32f7ab0a4ab6d87479b59647e1f39d9f3a6fb5220fb9"
		"db17f7939283e19d623d71cf0aa4eb7d6e2b0f2314b36224c7efed3214bb4e04995c2b04dd7308aaf12da9abc2a8c73e12958c6f2d515f9259c1850647f09e1dd5abc0cfcb73de90ca39089b3396f90e207b1fdf285ca44eac0bb0581393fbaaf1043beeeb4f1f4b4fbeb150479ed18df13613349421ea20f0061aca2beea1e5b9572b8dc6aa2212e3b34820168e4363f7fe5f197499ed6d1f77290dcc1b3b0be02fe83487027691fc4682fde1c924666b217e335493e25be8541b17e9bb05ef5f20e8e76aca1552a4a32a2743d79f68001def49d74c00526debdc8f0adcf3\",\"key\":\"ZMbM3ORKZkUE8PW+xamkqx28bGrqDGY/gJ0nAKc/"
		"kk8bUXwEj8WwcLWzzA8GxY3uyLhN8UpLQYYJJdYLmnGcPZCfebd39UiGW7wINJxWOhfoy9rSolMrpovfN8/wdcAW+SHiky7XZRe5FfQ+98DX2zJPLGuv96qcJjW9/uAJyvc=\"}", 
		LAST);

	web_add_header("AO-7DEABF", 
		"{C_EncKeyVal}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("execution_11",
		"URL=https://enable.lrn.com/rest/zephyr/latest/execution?cycleId=1607&action=expand&projectId={projectId}&versionId={versionId}&offset=0&sorter=OrderId:ASC&_=1552626073138",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page",
		"Snapshot=t109.inf",
		"Mode=HTML",
		LAST);

	web_add_header("Origin", 
		"https://enable.lrn.com");

	web_custom_request("bulk_19", 
		"URL=https://enable.lrn.com/rest/analytics/1.0/publish/bulk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://enable.lrn.com/projects/CAM?selectedItem=com.thed.zephyr.je%3Azephyr-tests-page", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4656},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4310},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4310},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-4275},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3943},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3943},{\"name\":\""
		"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3667},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3667},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3655},{\"name\":\"js.globals.contextPath.get\",\"properties\":{},\"timeDelta\":-3655}]", 
		LAST);

	return 0;
}
