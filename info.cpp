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
	Hour* n5m = new Hour(5,'m',1,'a',true);
	week.push_back(n5m);
	Hour* n6m = new Hour(6,'m',2,'a',true);
	week.push_back(n6m);
	Hour* n7m = new Hour(7,'m',3,'a',true);
	week.push_back(n7m);
	Hour* n8m = new Hour(8,'m',4,'a',false);
	week.push_back(n8m);
	Hour* n9m = new Hour(9,'m',5,'h',false);
	week.push_back(n9m);
	Hour* n10m = new Hour(10,'m',6,'h',false);
	week.push_back(n10m);
	Hour* n11m = new Hour(11,'m',7,'h',false);
	week.push_back(n11m);
	Hour* n12m = new Hour(12,'m',8,'h',false);
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
	Hour* n5t = new Hour(18,'t',1,'a',true);
	week.push_back(n5t);
	Hour* n6t = new Hour(19,'t',2,'a',true);
	week.push_back(n6t);
	Hour* n7t = new Hour(20,'t',3,'a',true);
	week.push_back(n7t);
	Hour* n8t = new Hour(21,'t',4,'a',false);
	week.push_back(n8t);
	Hour* n9t = new Hour(22,'t',5,'h',false);
	week.push_back(n9t);
	Hour* n10t = new Hour(23,'t',6,'h',false);
	week.push_back(n10t);
	Hour* n11t = new Hour(24,'t',7,'h',false);
	week.push_back(n11t);
	Hour* n12t = new Hour(25,'t',8,'h',false);
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
	Hour* n5w = new Hour(31,'w',1,'a',true);
	week.push_back(n5w);
	Hour* n6w = new Hour(32,'w',2,'a',true);
	week.push_back(n6w);
	Hour* n7w = new Hour(33,'w',3,'a',true);
	week.push_back(n7w);
	Hour* n8w = new Hour(34,'w',4,'a',false);
	week.push_back(n8w);
	Hour* n9w = new Hour(35,'w',5,'h',false);
	week.push_back(n9w);
	Hour* n10w = new Hour(36,'w',6,'h',false);
	week.push_back(n10w);
	Hour* n11w = new Hour(37,'w',7,'h',false);
	week.push_back(n11w);
	Hour* n12w = new Hour(38,'w',8,'h',false);
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
	Hour* n5h = new Hour(44,'h',1,'a',true);
	week.push_back(n5h);
	Hour* n6h = new Hour(45,'h',2,'a',true);
	week.push_back(n6h);
	Hour* n7h = new Hour(46,'h',3,'a',true);
	week.push_back(n7h);
	Hour* n8h = new Hour(47,'h',4,'a',false);
	week.push_back(n8h);
	Hour* n9h = new Hour(48,'h',5,'h',false);
	week.push_back(n9h);
	Hour* n10h = new Hour(49,'h',6,'h',false);
	week.push_back(n10h);
	Hour* n11h = new Hour(50,'h',7,'h',false);
	week.push_back(n11h);
	Hour* n12h = new Hour(51,'h',8,'h',false);
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
	Hour* n5f = new Hour(57,'f',1,'a',true);
	week.push_back(n5f);
	Hour* n6f = new Hour(58,'f',2,'a',true);
	week.push_back(n6f);
	Hour* n7f = new Hour(59,'f',3,'a',true);
	week.push_back(n7f);
	Hour* n8f = new Hour(60,'f',4,'a',false);
	week.push_back(n8f);
	Hour* n9f = new Hour(61,'f',5,'h',false);
	week.push_back(n9f);

	//saturday first person
	Hour* n0s = new Hour(53,'s',1,'h',false);
	week.push_back(n0s);
	Hour* n1s = new Hour(54,'s',2,'h',false);
	week.push_back(n1s);
	Hour* n2s = new Hour(55,'s',3,'h',false);
	week.push_back(n2s);
	Hour* n3s = new Hour(56,'s',4,'h',false);
	week.push_back(n3s);

	//sunday first person

	//monday evening second person

	//tuesday evening second person

	//wednesday evening second person

	//thursday evening second person

	//saturday second person

	//sunday second person

	//monday day second person

	//tuesday day second person

	//wednesday day second person

	//thursday day second person

	//friday day second person

	//lab

	//maintenance
}

void buildStaff(std::vector<Worker*> staff) {
	Worker* sophie_r = new Worker("Sophie R.",8);
	staff.push_back(sophie_r);
	Worker* samantha_k = new Worker("Samantha K.",8);
	staff.push_back(samantha_k);
	Worker* nermeen_c = new Worker("Nermeen C.",8);
	staff.push_back(nermeen_c);
}