//Cracked by Roath
// yideng10.c

inherit ROOM;
void create()
{
	set("short", "����");
	set("long", @LONG
������һ������������һ���Ǵ����붨�ĵط���ż��Ҳ�����Ӵ����Ÿ�ɮ��
̽�ַ�����
LONG);
	set("exits", ([
		"out" : __DIR__"yideng12.c",
        ]));
	set("cost", 2);
	set("no_clean_up", 0);
	set("no_sleep_room",1);
	set("invalid_startroom", 1);
	setup();
}

int valid_leave(object me, string dir)
{
	object yd;
	if (objectp(yd=present("yideng dashi", environment(me))))
	{
		message_vision("һ�ƴ�ʦ��$N΢΢Ц��Ц������ı����ⲻ��Ҫ�ҵ������ˣ��ðɡ���\n˵��ת���뿪��������\n", me);
		me->delete_temp("yideng_waitreward");
		yd->move("/d/dali/yideng9.c");
	}
    return ::valid_leave(me, dir);
}