//Cracked by Roath
// fojing2.c

inherit ITEM;

string* titles = ({
//	"������",
//	"άĦ��",
//	"������",
//	"���Ͼ�",
	"�����پ�",
	"������;�",
	"������",
	"��վ�",
	"�����۶��ľ�",
});

void create()
{
	set_name(titles[random(sizeof(titles))], ({ "fo jing", "jing", "shu" }));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ��𾭡�\n");
		set("value", 200);
		set("material", "paper");
		set("skill", ([
			"name":	"buddhism",	// name of the skill
			"exp_required":	0,	// minimum combat experience required
			"jing_cost":	40,	// jing cost every time study this
			"difficulty":	20,	// the base int to learn this skill
			"max_skill":	100	// the maximum level you can learn
		]) );
	}
}