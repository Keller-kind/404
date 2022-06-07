/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 24/05/2022
 * @filename	: Aufzaehlungstypen
 */
#ifndef AUFZAEHLUNGSTYPEN_CPP
#define AUFZAEHLUNGSTYPEN_CPP
#include <iostream>
#include <vector>
using namespace std;
enum class Block{
Mo1, Mo2, Mo3, Mo4, Mo5, Mo6, Mo7,
Di1, Di2, Di3, Di4, Di5, Di6, Di7,
Mi1, Mi2, Mi3, Mi4, Mi5, Mi6, Mi7,
Do1, Do2, Do3, Do4, Do5, Do6, Do7,
Fr1, Fr2, Fr3, Fr4, Fr5, Fr6, Fr7,
Sa1, Sa2, Sa3, Sa4, Sa5, Sa6, Sa7};

enum class Tag{
	MO, DI, MI, DO, FR, SA


};

struct abc{
vector<Block> block;
Tag tag;
abc(){};
};

bool isAfternoon(Block b){
if (b==Block::Di4 || b==Block::Di5 || b==Block::Di6)return true;
return false;

}
int main(){
cout << (isAfternoon(Block::Di2) ? "Jawoll Nachmittag!" : "Ne bruder nichtmal Dienstag!");

}







 #endif /* AUFZAEHLUNGSTYPEN_CPP */

