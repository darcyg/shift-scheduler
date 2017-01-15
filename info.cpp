/*Author: Sophie Rehrig
  Date Started: 8 January 2017
  Last Modified: 8 January 2017

  This is a source file for the large needed vectors for an automatic shift scheduler.
*/

#include "info.h"

void buildShifts(std::vector<Hour*> week) {

	//monday first person
	Hour* n0m = new Hour(0,'m',8,'h',true);
	week.push_back(n0m);
	Hour* n1m = new Hour(1,'m',9,'a',true);
	week.push_back(n1m);
	Hour* n2m = new Hour(2,'m',10,'a',true);
	week.push_back(n2m);
	Hour* n3m = new Hour(3,'m',11,'a',true);
	week.push_back(n3m);
	Hour* n4m = new Hour(4,'m',12,'h',true);
	week.push_back(n4m);
	Hour* n5m = new Hour(5,'m',13,'a',true);
	week.push_back(n5m);
	Hour* n6m = new Hour(6,'m',14,'a',true);
	week.push_back(n6m);
	Hour* n7m = new Hour(7,'m',15,'a',true);
	week.push_back(n7m);
	Hour* n8m = new Hour(8,'m',16,'a',false);
	week.push_back(n8m);
	Hour* n9m = new Hour(9,'m',17,'h',false);
	week.push_back(n9m);
	Hour* n10m = new Hour(10,'m',18,'h',false);
	week.push_back(n10m);
	Hour* n11m = new Hour(11,'m',19,'h',false);
	week.push_back(n11m);
	Hour* n12m = new Hour(12,'m',20,'h',false);
	week.push_back(n12m);

	//tuesday first person
	Hour* n0t = new Hour(13,'t',8,'h',true);
	week.push_back(n0t);
	Hour* n1t = new Hour(14,'t',9,'a',true);
	week.push_back(n1t);
	Hour* n2t = new Hour(15,'t',10,'a',true);
	week.push_back(n2t);
	Hour* n3t = new Hour(16,'t',11,'a',true);
	week.push_back(n3t);
	Hour* n4t = new Hour(17,'t',12,'h',true);
	week.push_back(n4t);
	Hour* n5t = new Hour(18,'t',13,'a',true);
	week.push_back(n5t);
	Hour* n6t = new Hour(19,'t',14,'a',true);
	week.push_back(n6t);
	Hour* n7t = new Hour(20,'t',15,'a',true);
	week.push_back(n7t);
	Hour* n8t = new Hour(21,'t',16,'a',false);
	week.push_back(n8t);
	Hour* n9t = new Hour(22,'t',17,'h',false);
	week.push_back(n9t);
	Hour* n10t = new Hour(23,'t',18,'h',false);
	week.push_back(n10t);
	Hour* n11t = new Hour(24,'t',19,'h',false);
	week.push_back(n11t);
	Hour* n12t = new Hour(25,'t',20,'h',false);
	week.push_back(n12t);

	//wednesday first person
	Hour* n0w = new Hour(26,'w',8,'h',true);
	week.push_back(n0w);
	Hour* n1w = new Hour(27,'w',9,'a',true);
	week.push_back(n1w);
	Hour* n2w = new Hour(28,'w',10,'a',true);
	week.push_back(n2w);
	Hour* n3w = new Hour(29,'w',11,'a',true);
	week.push_back(n3w);
	Hour* n4w = new Hour(30,'w',12,'h',true);
	week.push_back(n4w);
	Hour* n5w = new Hour(31,'w',13,'a',true);
	week.push_back(n5w);
	Hour* n6w = new Hour(32,'w',14,'a',true);
	week.push_back(n6w);
	Hour* n7w = new Hour(33,'w',15,'a',true);
	week.push_back(n7w);
	Hour* n8w = new Hour(34,'w',16,'a',false);
	week.push_back(n8w);
	Hour* n9w = new Hour(35,'w',17,'h',false);
	week.push_back(n9w);
	Hour* n10w = new Hour(36,'w',18,'h',false);
	week.push_back(n10w);
	Hour* n11w = new Hour(37,'w',19,'h',false);
	week.push_back(n11w);
	Hour* n12w = new Hour(38,'w',20,'h',false);
	week.push_back(n12w);

	//thursday first person
	Hour* n0h = new Hour(39,'h',8,'h',true);
	week.push_back(n0h);
	Hour* n1h = new Hour(40,'h',9,'a',true);
	week.push_back(n1h);
	Hour* n2h = new Hour(41,'h',10,'a',true);
	week.push_back(n2h);
	Hour* n3h = new Hour(42,'h',11,'a',true);
	week.push_back(n3h);
	Hour* n4h = new Hour(43,'h',12,'h',true);
	week.push_back(n4h);
	Hour* n5h = new Hour(44,'h',13,'a',true);
	week.push_back(n5h);
	Hour* n6h = new Hour(45,'h',14,'a',true);
	week.push_back(n6h);
	Hour* n7h = new Hour(46,'h',15,'a',true);
	week.push_back(n7h);
	Hour* n8h = new Hour(47,'h',16,'a',false);
	week.push_back(n8h);
	Hour* n9h = new Hour(48,'h',17,'h',false);
	week.push_back(n9h);
	Hour* n10h = new Hour(49,'h',18,'h',false);
	week.push_back(n10h);
	Hour* n11h = new Hour(50,'h',19,'h',false);
	week.push_back(n11h);
	Hour* n12h = new Hour(51,'h',20,'h',false);
	week.push_back(n12h);

	//friday first person
	Hour* n0f = new Hour(52,'f',8,'h',true);
	week.push_back(n0f);
	Hour* n1f = new Hour(53,'f',9,'a',true);
	week.push_back(n1f);
	Hour* n2f = new Hour(54,'f',10,'a',true);
	week.push_back(n2f);
	Hour* n3f = new Hour(55,'f',11,'a',true);
	week.push_back(n3f);
	Hour* n4f = new Hour(56,'f',12,'h',true);
	week.push_back(n4f);
	Hour* n5f = new Hour(57,'f',13,'a',true);
	week.push_back(n5f);
	Hour* n6f = new Hour(58,'f',14,'a',true);
	week.push_back(n6f);
	Hour* n7f = new Hour(59,'f',15,'a',true);
	week.push_back(n7f);
	Hour* n8f = new Hour(60,'f',16,'a',false);
	week.push_back(n8f);
	Hour* n9f = new Hour(61,'f',17,'h',false);
	week.push_back(n9f);

	//saturday first person
	Hour* n0s = new Hour(53,'s',13,'h',false);
	week.push_back(n0s);
	Hour* n1s = new Hour(54,'s',14,'h',false);
	week.push_back(n1s);
	Hour* n2s = new Hour(55,'s',15,'h',false);
	week.push_back(n2s);
	Hour* n3s = new Hour(56,'s',16,'h',false);
	week.push_back(n3s);

	//sunday first person
	Hour* n0u = new Hour(57,'u',14,'h',false);
	week.push_back(n0u);
	Hour* n1u = new Hour(58,'u',15,'h',false);
	week.push_back(n1u);
	Hour* n2u = new Hour(59,'u',16,'h',false);
	week.push_back(n2u);
	Hour* n3u = new Hour(60,'u',17,'h',false);
	week.push_back(n3u);
	Hour* n4u = new Hour(61,'u',18,'h',false);
	week.push_back(n4u);
	Hour* n5u = new Hour(62,'u',19,'h',false);
	week.push_back(n5u);
	Hour* n6u = new Hour(63,'u',20,'h',false);
	week.push_back(n6u);

	//monday evening second person
	Hour* n13m = new Hour(64,'m',18,'h',false);
	week.push_back(n13m);
	Hour * n14m = new Hour(65,'m',19,'h',false);
	week.push_back(n14m);
	Hour* n15m = new Hour(66,'m',20,'h',false);
	week.push_back(n15m);

	//tuesday evening second person
	Hour* n13t = new Hour(67,'t',18,'h',false);
	week.push_back(n13t);
	Hour * n14t = new Hour(68,'t',19,'h',false);
	week.push_back(n14t);
	Hour* n15t = new Hour(69,'t',20,'h',false);
	week.push_back(n15t);

	//wednesday evening second person
	Hour* n13w = new Hour(70,'w',18,'h',false);
	week.push_back(n13w);
	Hour * n14w = new Hour(71,'w',19,'h',false);
	week.push_back(n14w);
	Hour* n15w = new Hour(72,'w',20,'h',false);
	week.push_back(n15w);

	//thursday evening second person
	Hour* n13h = new Hour(73,'h',18,'h',false);
	week.push_back(n13h);
	Hour * n14h = new Hour(74,'h',19,'h',false);
	week.push_back(n14h);
	Hour* n15h = new Hour(75,'h',20,'h',false);
	week.push_back(n15h);

	//saturday second person
	Hour* n4s = new Hour(76,'s',13,'h',false);
	week.push_back(n4s);
	Hour* n5s = new Hour(77,'s',14,'h',false);
	week.push_back(n5s);
	Hour* n6s = new Hour(78,'s',15,'h',false);
	week.push_back(n6s);
	Hour* n7s = new Hour(79,'s',16,'h',false);
	week.push_back(n7s);

	//sunday second person
	Hour* n7u = new Hour(80,'u',14,'h',false);
	week.push_back(n7u);
	Hour* n8u = new Hour(81,'u',15,'h',false);
	week.push_back(n8u);
	Hour* n9u = new Hour(82,'u',16,'h',false);
	week.push_back(n9u);
	Hour* n10u = new Hour(83,'u',17,'h',false);
	week.push_back(n10u);
	Hour* n11u = new Hour(84,'u',18,'h',false);
	week.push_back(n11u);
	Hour* n12u = new Hour(85,'u',19,'h',false);
	week.push_back(n12u);
	Hour* n13u = new Hour(86,'u',20,'h',false);
	week.push_back(n13u);

	//monday day second person
	Hour* n16m = new Hour(87,'m',8,'h',true);
	week.push_back(n16m);
	Hour* n17m = new Hour(88,'m',9,'b',true);
	week.push_back(n17m);
	Hour* n18m = new Hour(89,'m',10,'b',true);
	week.push_back(n18m);
	Hour* n19m = new Hour(90,'m',11,'b',true);
	week.push_back(n19m);
	Hour* n20m = new Hour(91,'m',12,'h',true);
	week.push_back(n20m);
	Hour* n21m = new Hour(92,'m',13,'b',true);
	week.push_back(n21m);
	Hour* n22m = new Hour(93,'m',14,'b',true);
	week.push_back(n22m);
	Hour* n23m = new Hour(94,'m',15,'b',true);
	week.push_back(n23m);
	Hour* n24m = new Hour(95,'m',16,'b',false);
	week.push_back(n24m);
	Hour* n25m = new Hour(96,'m',17,'h',false);
	week.push_back(n25m);

	//tuesday day second person
	Hour* n16t = new Hour(97,'t',8,'h',true);
	week.push_back(n16t);
	Hour* n17t = new Hour(98,'t',9,'b',true);
	week.push_back(n17t);
	Hour* n18t = new Hour(99,'t',10,'b',true);
	week.push_back(n18t);
	Hour* n19t = new Hour(100,'t',11,'b',true);
	week.push_back(n19t);
	Hour* n20t = new Hour(101,'t',12,'h',true);
	week.push_back(n20t);
	Hour* n21t = new Hour(102,'t',13,'b',true);
	week.push_back(n21t);
	Hour* n22t = new Hour(103,'t',14,'b',true);
	week.push_back(n22t);
	Hour* n23t = new Hour(104,'t',15,'b',true);
	week.push_back(n23t);
	Hour* n24t = new Hour(105,'t',16,'b',false);
	week.push_back(n24t);
	Hour* n25t = new Hour(106,'t',17,'h',false);
	week.push_back(n25t);

	//wednesday day second person
	Hour* n16w = new Hour(107,'w',8,'h',true);
	week.push_back(n16w);
	Hour* n17w = new Hour(108,'w',9,'b',true);
	week.push_back(n17w);
	Hour* n18w = new Hour(109,'w',10,'b',true);
	week.push_back(n18w);
	Hour* n19w = new Hour(110,'w',11,'b',true);
	week.push_back(n19w);
	Hour* n20w = new Hour(111,'w',12,'h',true);
	week.push_back(n20w);
	Hour* n21w = new Hour(112,'w',13,'b',true);
	week.push_back(n21w);
	Hour* n22w = new Hour(113,'w',14,'b',true);
	week.push_back(n22w);
	Hour* n23w = new Hour(114,'w',15,'b',true);
	week.push_back(n23w);
	Hour* n24w = new Hour(115,'w',16,'b',false);
	week.push_back(n24w);
	Hour* n25w = new Hour(116,'w',17,'h',false);
	week.push_back(n25w);

	//thursday day second person
	Hour* n16h = new Hour(107,'h',8,'h',true);
	week.push_back(n16h);
	Hour* n17h = new Hour(108,'h',9,'b',true);
	week.push_back(n17h);
	Hour* n18h = new Hour(109,'h',10,'b',true);
	week.push_back(n18h);
	Hour* n19h = new Hour(110,'h',11,'b',true);
	week.push_back(n19h);
	Hour* n20h = new Hour(111,'h',12,'h',true);
	week.push_back(n20h);
	Hour* n21h = new Hour(112,'h',13,'b',true);
	week.push_back(n21h);
	Hour* n22h = new Hour(113,'h',14,'b',true);
	week.push_back(n22h);
	Hour* n23h = new Hour(114,'h',15,'b',true);
	week.push_back(n23h);
	Hour* n24h = new Hour(115,'h',16,'b',false);
	week.push_back(n24h);
	Hour* n25h = new Hour(116,'h',17,'h',false);
	week.push_back(n25h);

	//friday second person
	Hour* n10f = new Hour(117,'f',8,'h',true);
	week.push_back(n10f);
	Hour* n11f = new Hour(118,'f',9,'b',true);
	week.push_back(n11f);
	Hour* n12f = new Hour(119,'f',10,'b',true);
	week.push_back(n12f);
	Hour* n13f = new Hour(120,'f',11,'b',true);
	week.push_back(n13f);
	Hour* n14f = new Hour(121,'f',12,'h',true);
	week.push_back(n14f);
	Hour* n15f = new Hour(122,'f',13,'b',true);
	week.push_back(n15f);
	Hour* n16f = new Hour(123,'f',14,'b',true);
	week.push_back(n16f);
	Hour* n17f = new Hour(124,'f',15,'b',true);
	week.push_back(n17f);
	Hour* n18f = new Hour(125,'f',16,'b',false);
	week.push_back(n18f);
	Hour* n19f = new Hour(126,'f',17,'h',false);
	week.push_back(n19f);

	//lab
	Hour* n26m = new Hour(127,'m',9,'l',false);
	week.push_back(n26m);
	Hour* n27m = new Hour(128,'m',16,'l',false);
	week.push_back(n27m);
	Hour* n26t = new Hour(129,'t',9,'l',false);
	week.push_back(n26t);
	Hour* n27t = new Hour(130,'t',16,'l',false);
	week.push_back(n27t);
	Hour* n26w = new Hour(131,'w',9,'l',false);
	week.push_back(n26w);
	Hour* n27w = new Hour(132,'w',16,'l',false);
	week.push_back(n27w);
	Hour* n26h = new Hour(131,'h',9,'l',false);
	week.push_back(n26h);
	Hour* n27h = new Hour(132,'h',16,'l',false);
	week.push_back(n27h);
	Hour* n20f = new Hour(133,'f',9,'l',false);
	week.push_back(n20f);
	Hour* n21f = new Hour(134,'h',16,'l',false);
	week.push_back(n21f);
	Hour* n8s = new Hour(135,'s',16,'l',false);
	week.push_back(n8s);
	Hour* n14u = new Hour(136,'u',16,'l',false);
	week.push_back(n8s);

	//maintenance
	Hour* n28m = new Hour(137,'m',20,'m',false);
	week.push_back(n28m);
	Hour* n28t = new Hour(138,'t',20,'m',false);
	week.push_back(n28t);
	Hour* n28w = new Hour(139,'w',20,'m',false);
	week.push_back(n28w);
	Hour* n28h = new Hour(140,'h',20,'m',false);
	week.push_back(n28h);
	Hour* n21f = new Hour(141,'f',20,'m',false);
	week.push_back(n21f);
	Hour* n9s = new Hour(142,'s',15,'m',false);
	week.push_back(n9s);
	Hour* n15u = new Hour(143,'u',20,'m',false);
	week.push_back(n15u);
}

void buildStaff(std::vector<Worker*> staff) {
	Worker* sophie_r = new Worker("Sophie R.",8);
	staff.push_back(sophie_r);
	Worker* samantha_k = new Worker("Samantha K.",8);
	staff.push_back(samantha_k);
	Worker* nermeen_c = new Worker("Nermeen C.",8);
	staff.push_back(nermeen_c);
}