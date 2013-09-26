#pragma once
#include "Machinery.h"
class Combat :
	public Machinery
{
protected:
	int radius; //������ �����
	int attack_speed; // �������� �����
	int damage; // ����
	int fly_mode;
public:
	
	
	//Combat(const Combat &cm);

	

	// ��� �������� �������
	Combat(void); // �����������
	Combat(int dx, int dy, int arm, int spd, int m_a, int rad, int a_s, int dmg, int f_m); // �����������


	// ��� ��������� ���������� �������
	



	// ��� ������ ���������� �� �������
	int get_rad();
	int get_a_s();
	int get_dmg();
	int get_f_m();

	virtual ~Combat(void);
protected:
	static const int DMG = 10;
	static const int A_S = 15;
	static const int RAD = 5;
	static const int LVL = 1;



};

