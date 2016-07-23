#ifndef ATTACK_INFO_H
#define ATTACK_INFO_H

typedef unsigned char BYTE;

#define ATTACK_TABLE_MAX 10

struct AttackInfo
{
    int set;
    BYTE ip[4];
    BYTE mac[6];
};

struct AttackInfo gAttackInfoArr[10];
struct AttackInfo gateway;

int InsertAttackInfo(BYTE* ip, BYTE* mac);

int DeleteAttackInfo(BYTE* ip);

#endif // ATTACK_INFO_H