//Cracked by Roath
// little_bee.c

inherit NPC;

void create()
{
	set_name("С�۷�", ({ "little bee", "bee"}) );
	set("race", "����");
	set("subrace", "�ɳ�");
	set("age", 2);
	set("long", "һֻ������ȥ��С�۷䡣\n");
	
	set("str", 30);
	set("dex", 40);

	set("limbs", ({ "ͷ��", "����", "���", "β��" }) );

	set_temp("apply/attack", 10);
	set_temp("apply/armor", 3);
	
	set("chat_chance", 2);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
		"С�۷������˷ɹ���������ͷ��ת��һȦ���ַ����ˡ�\n",
		"С�۷������˷ɹ��������������ش��˸�ת���ַ����ˡ�\n",
	 }) );

	setup();
}
