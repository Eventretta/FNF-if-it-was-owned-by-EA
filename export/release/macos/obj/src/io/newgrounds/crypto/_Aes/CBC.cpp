#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto_Aes
#include <io/newgrounds/crypto/Aes.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto__Aes_Block_Impl_
#include <io/newgrounds/crypto/_Aes/Block_Impl_.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto__Aes_CBC
#include <io/newgrounds/crypto/_Aes/CBC.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_163_keyExpansion,"io.newgrounds.crypto._Aes.CBC","keyExpansion",0x515f1e15,"io.newgrounds.crypto._Aes.CBC.keyExpansion","io/newgrounds/crypto/Aes.hx",163,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_198_rotWord,"io.newgrounds.crypto._Aes.CBC","rotWord",0x96cd76ec,"io.newgrounds.crypto._Aes.CBC.rotWord","io/newgrounds/crypto/Aes.hx",198,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_206_subWord,"io.newgrounds.crypto._Aes.CBC","subWord",0xc950a6d5,"io.newgrounds.crypto._Aes.CBC.subWord","io/newgrounds/crypto/Aes.hx",206,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_214_encrypt,"io.newgrounds.crypto._Aes.CBC","encrypt",0x5beb8dd0,"io.newgrounds.crypto._Aes.CBC.encrypt","io/newgrounds/crypto/Aes.hx",214,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_237_decrypt,"io.newgrounds.crypto._Aes.CBC","decrypt",0x991fd7b8,"io.newgrounds.crypto._Aes.CBC.decrypt","io/newgrounds/crypto/Aes.hx",237,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_77_boot,"io.newgrounds.crypto._Aes.CBC","boot",0xadae73e7,"io.newgrounds.crypto._Aes.CBC.boot","io/newgrounds/crypto/Aes.hx",77,0xa53cc523)
static const int _hx_array_data_78318cd9_12[] = {
	(int)99,(int)124,(int)119,(int)123,(int)242,(int)107,(int)111,(int)197,(int)48,(int)1,(int)103,(int)43,(int)254,(int)215,(int)171,(int)118,(int)202,(int)130,(int)201,(int)125,(int)250,(int)89,(int)71,(int)240,(int)173,(int)212,(int)162,(int)175,(int)156,(int)164,(int)114,(int)192,(int)183,(int)253,(int)147,(int)38,(int)54,(int)63,(int)247,(int)204,(int)52,(int)165,(int)229,(int)241,(int)113,(int)216,(int)49,(int)21,(int)4,(int)199,(int)35,(int)195,(int)24,(int)150,(int)5,(int)154,(int)7,(int)18,(int)128,(int)226,(int)235,(int)39,(int)178,(int)117,(int)9,(int)131,(int)44,(int)26,(int)27,(int)110,(int)90,(int)160,(int)82,(int)59,(int)214,(int)179,(int)41,(int)227,(int)47,(int)132,(int)83,(int)209,(int)0,(int)237,(int)32,(int)252,(int)177,(int)91,(int)106,(int)203,(int)190,(int)57,(int)74,(int)76,(int)88,(int)207,(int)208,(int)239,(int)170,(int)251,(int)67,(int)77,(int)51,(int)133,(int)69,(int)249,(int)2,(int)127,(int)80,(int)60,(int)159,(int)168,(int)81,(int)163,(int)64,(int)143,(int)146,(int)157,(int)56,(int)245,(int)188,(int)182,(int)218,(int)33,(int)16,(int)255,(int)243,(int)210,(int)205,(int)12,(int)19,(int)236,(int)95,(int)151,(int)68,(int)23,(int)196,(int)167,(int)126,(int)61,(int)100,(int)93,(int)25,(int)115,(int)96,(int)129,(int)79,(int)220,(int)34,(int)42,(int)144,(int)136,(int)70,(int)238,(int)184,(int)20,(int)222,(int)94,(int)11,(int)219,(int)224,(int)50,(int)58,(int)10,(int)73,(int)6,(int)36,(int)92,(int)194,(int)211,(int)172,(int)98,(int)145,(int)149,(int)228,(int)121,(int)231,(int)200,(int)55,(int)109,(int)141,(int)213,(int)78,(int)169,(int)108,(int)86,(int)244,(int)234,(int)101,(int)122,(int)174,(int)8,(int)186,(int)120,(int)37,(int)46,(int)28,(int)166,(int)180,(int)198,(int)232,(int)221,(int)116,(int)31,(int)75,(int)189,(int)139,(int)138,(int)112,(int)62,(int)181,(int)102,(int)72,(int)3,(int)246,(int)14,(int)97,(int)53,(int)87,(int)185,(int)134,(int)193,(int)29,(int)158,(int)225,(int)248,(int)152,(int)17,(int)105,(int)217,(int)142,(int)148,(int)155,(int)30,(int)135,(int)233,(int)206,(int)85,(int)40,(int)223,(int)140,(int)161,(int)137,(int)13,(int)191,(int)230,(int)66,(int)104,(int)65,(int)153,(int)45,(int)15,(int)176,(int)84,(int)187,(int)22,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_97_boot,"io.newgrounds.crypto._Aes.CBC","boot",0xadae73e7,"io.newgrounds.crypto._Aes.CBC.boot","io/newgrounds/crypto/Aes.hx",97,0xa53cc523)
static const int _hx_array_data_78318cd9_14[] = {
	(int)82,(int)9,(int)106,(int)213,(int)48,(int)54,(int)165,(int)56,(int)191,(int)64,(int)163,(int)158,(int)129,(int)243,(int)215,(int)251,(int)124,(int)227,(int)57,(int)130,(int)155,(int)47,(int)255,(int)135,(int)52,(int)142,(int)67,(int)68,(int)196,(int)222,(int)233,(int)203,(int)84,(int)123,(int)148,(int)50,(int)166,(int)194,(int)35,(int)61,(int)238,(int)76,(int)149,(int)11,(int)66,(int)250,(int)195,(int)78,(int)8,(int)46,(int)161,(int)102,(int)40,(int)217,(int)36,(int)178,(int)118,(int)91,(int)162,(int)73,(int)109,(int)139,(int)209,(int)37,(int)114,(int)248,(int)246,(int)100,(int)134,(int)104,(int)152,(int)22,(int)212,(int)164,(int)92,(int)204,(int)93,(int)101,(int)182,(int)146,(int)108,(int)112,(int)72,(int)80,(int)253,(int)237,(int)185,(int)218,(int)94,(int)21,(int)70,(int)87,(int)167,(int)141,(int)157,(int)132,(int)144,(int)216,(int)171,(int)0,(int)140,(int)188,(int)211,(int)10,(int)247,(int)228,(int)88,(int)5,(int)184,(int)179,(int)69,(int)6,(int)208,(int)44,(int)30,(int)143,(int)202,(int)63,(int)15,(int)2,(int)193,(int)175,(int)189,(int)3,(int)1,(int)19,(int)138,(int)107,(int)58,(int)145,(int)17,(int)65,(int)79,(int)103,(int)220,(int)234,(int)151,(int)242,(int)207,(int)206,(int)240,(int)180,(int)230,(int)115,(int)150,(int)172,(int)116,(int)34,(int)231,(int)173,(int)53,(int)133,(int)226,(int)249,(int)55,(int)232,(int)28,(int)117,(int)223,(int)110,(int)71,(int)241,(int)26,(int)113,(int)29,(int)41,(int)197,(int)137,(int)111,(int)183,(int)98,(int)14,(int)170,(int)24,(int)190,(int)27,(int)252,(int)86,(int)62,(int)75,(int)198,(int)210,(int)121,(int)32,(int)154,(int)219,(int)192,(int)254,(int)120,(int)205,(int)90,(int)244,(int)31,(int)221,(int)168,(int)51,(int)136,(int)7,(int)199,(int)49,(int)177,(int)18,(int)16,(int)89,(int)39,(int)128,(int)236,(int)95,(int)96,(int)81,(int)127,(int)169,(int)25,(int)181,(int)74,(int)13,(int)45,(int)229,(int)122,(int)159,(int)147,(int)201,(int)156,(int)239,(int)160,(int)224,(int)59,(int)77,(int)174,(int)42,(int)245,(int)176,(int)200,(int)235,(int)187,(int)60,(int)131,(int)83,(int)153,(int)97,(int)23,(int)43,(int)4,(int)126,(int)186,(int)119,(int)214,(int)38,(int)225,(int)105,(int)20,(int)99,(int)85,(int)33,(int)12,(int)125,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_117_boot,"io.newgrounds.crypto._Aes.CBC","boot",0xadae73e7,"io.newgrounds.crypto._Aes.CBC.boot","io/newgrounds/crypto/Aes.hx",117,0xa53cc523)
static const int _hx_array_data_78318cd9_16[] = {
	(int)1,(int)3,(int)5,(int)15,(int)17,(int)51,(int)85,(int)255,(int)26,(int)46,(int)114,(int)150,(int)161,(int)248,(int)19,(int)53,(int)95,(int)225,(int)56,(int)72,(int)216,(int)115,(int)149,(int)164,(int)247,(int)2,(int)6,(int)10,(int)30,(int)34,(int)102,(int)170,(int)229,(int)52,(int)92,(int)228,(int)55,(int)89,(int)235,(int)38,(int)106,(int)190,(int)217,(int)112,(int)144,(int)171,(int)230,(int)49,(int)83,(int)245,(int)4,(int)12,(int)20,(int)60,(int)68,(int)204,(int)79,(int)209,(int)104,(int)184,(int)211,(int)110,(int)178,(int)205,(int)76,(int)212,(int)103,(int)169,(int)224,(int)59,(int)77,(int)215,(int)98,(int)166,(int)241,(int)8,(int)24,(int)40,(int)120,(int)136,(int)131,(int)158,(int)185,(int)208,(int)107,(int)189,(int)220,(int)127,(int)129,(int)152,(int)179,(int)206,(int)73,(int)219,(int)118,(int)154,(int)181,(int)196,(int)87,(int)249,(int)16,(int)48,(int)80,(int)240,(int)11,(int)29,(int)39,(int)105,(int)187,(int)214,(int)97,(int)163,(int)254,(int)25,(int)43,(int)125,(int)135,(int)146,(int)173,(int)236,(int)47,(int)113,(int)147,(int)174,(int)233,(int)32,(int)96,(int)160,(int)251,(int)22,(int)58,(int)78,(int)210,(int)109,(int)183,(int)194,(int)93,(int)231,(int)50,(int)86,(int)250,(int)21,(int)63,(int)65,(int)195,(int)94,(int)226,(int)61,(int)71,(int)201,(int)64,(int)192,(int)91,(int)237,(int)44,(int)116,(int)156,(int)191,(int)218,(int)117,(int)159,(int)186,(int)213,(int)100,(int)172,(int)239,(int)42,(int)126,(int)130,(int)157,(int)188,(int)223,(int)122,(int)142,(int)137,(int)128,(int)155,(int)182,(int)193,(int)88,(int)232,(int)35,(int)101,(int)175,(int)234,(int)37,(int)111,(int)177,(int)200,(int)67,(int)197,(int)84,(int)252,(int)31,(int)33,(int)99,(int)165,(int)244,(int)7,(int)9,(int)27,(int)45,(int)119,(int)153,(int)176,(int)203,(int)70,(int)202,(int)69,(int)207,(int)74,(int)222,(int)121,(int)139,(int)134,(int)145,(int)168,(int)227,(int)62,(int)66,(int)198,(int)81,(int)243,(int)14,(int)18,(int)54,(int)90,(int)238,(int)41,(int)123,(int)141,(int)140,(int)143,(int)138,(int)133,(int)148,(int)167,(int)242,(int)13,(int)23,(int)57,(int)75,(int)221,(int)124,(int)132,(int)151,(int)162,(int)253,(int)28,(int)36,(int)108,(int)180,(int)199,(int)82,(int)246,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_137_boot,"io.newgrounds.crypto._Aes.CBC","boot",0xadae73e7,"io.newgrounds.crypto._Aes.CBC.boot","io/newgrounds/crypto/Aes.hx",137,0xa53cc523)
static const int _hx_array_data_78318cd9_18[] = {
	(int)0,(int)0,(int)25,(int)1,(int)50,(int)2,(int)26,(int)198,(int)75,(int)199,(int)27,(int)104,(int)51,(int)238,(int)223,(int)3,(int)100,(int)4,(int)224,(int)14,(int)52,(int)141,(int)129,(int)239,(int)76,(int)113,(int)8,(int)200,(int)248,(int)105,(int)28,(int)193,(int)125,(int)194,(int)29,(int)181,(int)249,(int)185,(int)39,(int)106,(int)77,(int)228,(int)166,(int)114,(int)154,(int)201,(int)9,(int)120,(int)101,(int)47,(int)138,(int)5,(int)33,(int)15,(int)225,(int)36,(int)18,(int)240,(int)130,(int)69,(int)53,(int)147,(int)218,(int)142,(int)150,(int)143,(int)219,(int)189,(int)54,(int)208,(int)206,(int)148,(int)19,(int)92,(int)210,(int)241,(int)64,(int)70,(int)131,(int)56,(int)102,(int)221,(int)253,(int)48,(int)191,(int)6,(int)139,(int)98,(int)179,(int)37,(int)226,(int)152,(int)34,(int)136,(int)145,(int)16,(int)126,(int)110,(int)72,(int)195,(int)163,(int)182,(int)30,(int)66,(int)58,(int)107,(int)40,(int)84,(int)250,(int)133,(int)61,(int)186,(int)43,(int)121,(int)10,(int)21,(int)155,(int)159,(int)94,(int)202,(int)78,(int)212,(int)172,(int)229,(int)243,(int)115,(int)167,(int)87,(int)175,(int)88,(int)168,(int)80,(int)244,(int)234,(int)214,(int)116,(int)79,(int)174,(int)233,(int)213,(int)231,(int)230,(int)173,(int)232,(int)44,(int)215,(int)117,(int)122,(int)235,(int)22,(int)11,(int)245,(int)89,(int)203,(int)95,(int)176,(int)156,(int)169,(int)81,(int)160,(int)127,(int)12,(int)246,(int)111,(int)23,(int)196,(int)73,(int)236,(int)216,(int)67,(int)31,(int)45,(int)164,(int)118,(int)123,(int)183,(int)204,(int)187,(int)62,(int)90,(int)251,(int)96,(int)177,(int)134,(int)59,(int)82,(int)161,(int)108,(int)170,(int)85,(int)41,(int)157,(int)151,(int)178,(int)135,(int)144,(int)97,(int)190,(int)220,(int)252,(int)188,(int)149,(int)207,(int)205,(int)55,(int)63,(int)91,(int)209,(int)83,(int)57,(int)132,(int)60,(int)65,(int)162,(int)109,(int)71,(int)20,(int)42,(int)158,(int)93,(int)86,(int)242,(int)211,(int)171,(int)68,(int)17,(int)146,(int)217,(int)35,(int)32,(int)46,(int)137,(int)180,(int)124,(int)184,(int)38,(int)119,(int)153,(int)227,(int)165,(int)103,(int)74,(int)237,(int)222,(int)197,(int)49,(int)254,(int)24,(int)13,(int)99,(int)140,(int)128,(int)192,(int)247,(int)112,(int)7,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_157_boot,"io.newgrounds.crypto._Aes.CBC","boot",0xadae73e7,"io.newgrounds.crypto._Aes.CBC.boot","io/newgrounds/crypto/Aes.hx",157,0xa53cc523)
static const int _hx_array_data_78318cd9_20[] = {
	(int)141,(int)1,(int)2,(int)4,(int)8,(int)16,(int)32,(int)64,(int)128,(int)27,(int)54,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_159_boot,"io.newgrounds.crypto._Aes.CBC","boot",0xadae73e7,"io.newgrounds.crypto._Aes.CBC.boot","io/newgrounds/crypto/Aes.hx",159,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_a25d86649de4ab00_160_boot,"io.newgrounds.crypto._Aes.CBC","boot",0xadae73e7,"io.newgrounds.crypto._Aes.CBC.boot","io/newgrounds/crypto/Aes.hx",160,0xa53cc523)
namespace io{
namespace newgrounds{
namespace crypto{
namespace _Aes{

void CBC_obj::__construct() { }

Dynamic CBC_obj::__CreateEmpty() { return new CBC_obj; }

void *CBC_obj::_hx_vtable = 0;

Dynamic CBC_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CBC_obj > _hx_result = new CBC_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CBC_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x147f8059;
}

::Array< int > CBC_obj::SBOX;

::Array< int > CBC_obj::RSBOX;

::Array< int > CBC_obj::POWER3;

::Array< int > CBC_obj::LOG3;

::Array< int > CBC_obj::RCON;

int CBC_obj::BLOCK_SIZE;

int CBC_obj::NB;

::Array< int > CBC_obj::keyExpansion( ::haxe::io::Bytes key){
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_163_keyExpansion)
HXLINE( 164)		int nk = (key->length >> 2);
HXLINE( 165)		int nr = (nk + 6);
HXLINE( 167)		::Array< int > this1 = ::Array_obj< int >::__new((16 * (nr + 1)));
HXDLIN( 167)		::Array< int > roundKey = this1;
HXLINE( 168)		::Array< int > this2 = ::Array_obj< int >::__new(4);
HXDLIN( 168)		::Array< int > temp = this2;
HXLINE( 170)		{
HXLINE( 170)			int _g = 0;
HXDLIN( 170)			int _g1 = nk;
HXDLIN( 170)			while((_g < _g1)){
HXLINE( 170)				_g = (_g + 1);
HXDLIN( 170)				int i = (_g - 1);
HXLINE( 172)				{
HXLINE( 173)					roundKey->__unsafe_set((4 * i),key->b->__get((4 * i)));
HXDLIN( 173)					roundKey->__unsafe_set(((4 * i) + 1),key->b->__get(((4 * i) + 1)));
HXDLIN( 173)					roundKey->__unsafe_set(((4 * i) + 2),key->b->__get(((4 * i) + 2)));
HXDLIN( 173)					roundKey->__unsafe_set(((4 * i) + 3),key->b->__get(((4 * i) + 3)));
            				}
            			}
            		}
HXLINE( 176)		{
HXLINE( 176)			int _g2 = nk;
HXDLIN( 176)			int _g3 = (4 * (nr + 1));
HXDLIN( 176)			while((_g2 < _g3)){
HXLINE( 176)				_g2 = (_g2 + 1);
HXDLIN( 176)				int i = (_g2 - 1);
HXLINE( 178)				{
HXLINE( 179)					{
HXLINE( 179)						int val = ( (int)(_hx_array_unsafe_get(roundKey,(4 * (i - 1)))) );
HXDLIN( 179)						temp->__unsafe_set(0,val);
            					}
HXDLIN( 179)					{
HXLINE( 179)						int val1 = ( (int)(_hx_array_unsafe_get(roundKey,((4 * (i - 1)) + 1))) );
HXDLIN( 179)						temp->__unsafe_set(1,val1);
            					}
HXDLIN( 179)					{
HXLINE( 179)						int val2 = ( (int)(_hx_array_unsafe_get(roundKey,((4 * (i - 1)) + 2))) );
HXDLIN( 179)						temp->__unsafe_set(2,val2);
            					}
HXDLIN( 179)					{
HXLINE( 179)						int val3 = ( (int)(_hx_array_unsafe_get(roundKey,((4 * (i - 1)) + 3))) );
HXDLIN( 179)						temp->__unsafe_set(3,val3);
            					}
            				}
HXLINE( 181)				if ((::hx::Mod(i,nk) == 0)) {
HXLINE( 183)					temp = ::io::newgrounds::crypto::_Aes::CBC_obj::subWord(::io::newgrounds::crypto::_Aes::CBC_obj::rotWord(temp));
HXLINE( 184)					int k = ::Std_obj::_hx_int((( (Float)(i) ) / ( (Float)(nk) )));
HXLINE( 185)					{
HXLINE( 185)						::Array< int > _g = temp;
HXDLIN( 185)						{
HXLINE( 185)							int val = ( (int)(_hx_array_unsafe_get(_g,0)) );
HXDLIN( 185)							int val1 = (val ^ ( (int)(_hx_array_unsafe_get(::io::newgrounds::crypto::_Aes::CBC_obj::RCON,k)) ));
HXDLIN( 185)							_g->__unsafe_set(0,val1);
            						}
            					}
            				}
            				else {
HXLINE( 187)					bool _hx_tmp;
HXDLIN( 187)					if ((nk > 6)) {
HXLINE( 187)						_hx_tmp = (::hx::Mod(i,nk) == 4);
            					}
            					else {
HXLINE( 187)						_hx_tmp = false;
            					}
HXDLIN( 187)					if (_hx_tmp) {
HXLINE( 188)						temp = ::io::newgrounds::crypto::_Aes::CBC_obj::subWord(temp);
            					}
            				}
HXLINE( 190)				int k = (i * 4);
HXLINE( 191)				int m = ((i - nk) * 4);
HXLINE( 192)				{
HXLINE( 192)					{
HXLINE( 192)						int val4 = ( (int)(_hx_array_unsafe_get(roundKey,m)) );
HXDLIN( 192)						int val5 = (val4 ^ ( (int)(_hx_array_unsafe_get(temp,0)) ));
HXDLIN( 192)						roundKey->__unsafe_set(k,val5);
            					}
HXDLIN( 192)					{
HXLINE( 192)						int val6 = ( (int)(_hx_array_unsafe_get(roundKey,(m + 1))) );
HXDLIN( 192)						int val7 = (val6 ^ ( (int)(_hx_array_unsafe_get(temp,1)) ));
HXDLIN( 192)						roundKey->__unsafe_set((k + 1),val7);
            					}
HXDLIN( 192)					{
HXLINE( 192)						int val8 = ( (int)(_hx_array_unsafe_get(roundKey,(m + 2))) );
HXDLIN( 192)						int val9 = (val8 ^ ( (int)(_hx_array_unsafe_get(temp,2)) ));
HXDLIN( 192)						roundKey->__unsafe_set((k + 2),val9);
            					}
HXDLIN( 192)					{
HXLINE( 192)						int val10 = ( (int)(_hx_array_unsafe_get(roundKey,(m + 3))) );
HXDLIN( 192)						int val11 = (val10 ^ ( (int)(_hx_array_unsafe_get(temp,3)) ));
HXDLIN( 192)						roundKey->__unsafe_set((k + 3),val11);
            					}
            				}
            			}
            		}
HXLINE( 195)		return roundKey;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CBC_obj,keyExpansion,return )

::Array< int > CBC_obj::rotWord(::Array< int > w){
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_198_rotWord)
HXLINE( 200)		int tmp = ( (int)(_hx_array_unsafe_get(w,0)) );
HXLINE( 201)		{
HXLINE( 201)			{
HXLINE( 201)				int val = ( (int)(_hx_array_unsafe_get(w,1)) );
HXDLIN( 201)				w->__unsafe_set(0,val);
            			}
HXDLIN( 201)			{
HXLINE( 201)				int val1 = ( (int)(_hx_array_unsafe_get(w,2)) );
HXDLIN( 201)				w->__unsafe_set(1,val1);
            			}
HXDLIN( 201)			{
HXLINE( 201)				int val2 = ( (int)(_hx_array_unsafe_get(w,3)) );
HXDLIN( 201)				w->__unsafe_set(2,val2);
            			}
            		}
HXLINE( 202)		w->__unsafe_set(3,tmp);
HXLINE( 203)		return w;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CBC_obj,rotWord,return )

::Array< int > CBC_obj::subWord(::Array< int > w){
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_206_subWord)
HXLINE( 208)		{
HXLINE( 209)			{
HXLINE( 209)				::Array< int > this1 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 209)				int val = ( (int)(_hx_array_unsafe_get(this1,( (int)(_hx_array_unsafe_get(w,0)) ))) );
HXDLIN( 209)				w->__unsafe_set(0,val);
            			}
HXDLIN( 209)			{
HXLINE( 209)				::Array< int > this2 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 209)				int val1 = ( (int)(_hx_array_unsafe_get(this2,( (int)(_hx_array_unsafe_get(w,1)) ))) );
HXDLIN( 209)				w->__unsafe_set(1,val1);
            			}
HXDLIN( 209)			{
HXLINE( 209)				::Array< int > this3 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 209)				int val2 = ( (int)(_hx_array_unsafe_get(this3,( (int)(_hx_array_unsafe_get(w,2)) ))) );
HXDLIN( 209)				w->__unsafe_set(2,val2);
            			}
HXDLIN( 209)			{
HXLINE( 209)				::Array< int > this4 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 209)				int val3 = ( (int)(_hx_array_unsafe_get(this4,( (int)(_hx_array_unsafe_get(w,3)) ))) );
HXDLIN( 209)				w->__unsafe_set(3,val3);
            			}
            		}
HXLINE( 211)		return w;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CBC_obj,subWord,return )

 ::haxe::io::Bytes CBC_obj::encrypt( ::haxe::io::Bytes src, ::haxe::io::Bytes iv, ::io::newgrounds::crypto::Aes aes){
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_214_encrypt)
HXLINE( 216)		::Array< ::Dynamic> block = ::io::newgrounds::crypto::_Aes::Block_Impl__obj::_new();
HXLINE( 217)		 ::haxe::io::Bytes out = src->sub(0,src->length);
HXLINE( 218)		 ::haxe::io::Bytes vector = iv->sub(0,iv->length);
HXLINE( 219)		int i = 0;
HXLINE( 220)		int len = out->length;
HXLINE( 221)		while((i < len)){
HXLINE( 223)			{
HXLINE( 223)				int _g = 0;
HXDLIN( 223)				while((_g < 16)){
HXLINE( 223)					_g = (_g + 1);
HXDLIN( 223)					int j = (_g - 1);
HXLINE( 224)					out->b[(i + j)] = ( (unsigned char)((( (int)(out->b->__get((i + j))) ) ^ ( (int)(vector->b->__get(j)) ))) );
            				}
            			}
HXLINE( 226)			::io::newgrounds::crypto::_Aes::Block_Impl__obj::readBytes(block,out,i);
HXLINE( 227)			::io::newgrounds::crypto::_Aes::Block_Impl__obj::encrypt(block,aes);
HXLINE( 228)			::io::newgrounds::crypto::_Aes::Block_Impl__obj::writeBytes(block,out,i);
HXLINE( 230)			vector = out->sub(i,16);
HXLINE( 231)			i = (i + 16);
            		}
HXLINE( 234)		return out;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CBC_obj,encrypt,return )

 ::haxe::io::Bytes CBC_obj::decrypt( ::haxe::io::Bytes src, ::haxe::io::Bytes iv, ::io::newgrounds::crypto::Aes aes){
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_237_decrypt)
HXLINE( 239)		::Array< ::Dynamic> block = ::io::newgrounds::crypto::_Aes::Block_Impl__obj::_new();
HXLINE( 240)		 ::haxe::io::Bytes out = src->sub(0,src->length);
HXLINE( 241)		int vpos = (out->length - 16);
HXLINE( 242)		int i = out->length;
HXLINE( 243)		while((i > 0)){
HXLINE( 245)			i = (i - 16);
HXLINE( 246)			vpos = (vpos - 16);
HXLINE( 248)			::io::newgrounds::crypto::_Aes::Block_Impl__obj::readBytes(block,out,i);
HXLINE( 249)			::io::newgrounds::crypto::_Aes::Block_Impl__obj::decrypt(block,aes);
HXLINE( 250)			::io::newgrounds::crypto::_Aes::Block_Impl__obj::writeBytes(block,out,i);
HXLINE( 252)			if ((vpos < 0)) {
HXLINE( 255)				out->b[0] = ( (unsigned char)((( (int)(out->b->__get(0)) ) ^ ( (int)(iv->b->__get(0)) ))) );
HXDLIN( 255)				out->b[1] = ( (unsigned char)((( (int)(out->b->__get(1)) ) ^ ( (int)(iv->b->__get(1)) ))) );
HXDLIN( 255)				out->b[2] = ( (unsigned char)((( (int)(out->b->__get(2)) ) ^ ( (int)(iv->b->__get(2)) ))) );
HXDLIN( 255)				out->b[3] = ( (unsigned char)((( (int)(out->b->__get(3)) ) ^ ( (int)(iv->b->__get(3)) ))) );
HXDLIN( 255)				out->b[4] = ( (unsigned char)((( (int)(out->b->__get(4)) ) ^ ( (int)(iv->b->__get(4)) ))) );
HXDLIN( 255)				out->b[5] = ( (unsigned char)((( (int)(out->b->__get(5)) ) ^ ( (int)(iv->b->__get(5)) ))) );
HXDLIN( 255)				out->b[6] = ( (unsigned char)((( (int)(out->b->__get(6)) ) ^ ( (int)(iv->b->__get(6)) ))) );
HXDLIN( 255)				out->b[7] = ( (unsigned char)((( (int)(out->b->__get(7)) ) ^ ( (int)(iv->b->__get(7)) ))) );
HXDLIN( 255)				out->b[8] = ( (unsigned char)((( (int)(out->b->__get(8)) ) ^ ( (int)(iv->b->__get(8)) ))) );
HXDLIN( 255)				out->b[9] = ( (unsigned char)((( (int)(out->b->__get(9)) ) ^ ( (int)(iv->b->__get(9)) ))) );
HXDLIN( 255)				out->b[10] = ( (unsigned char)((( (int)(out->b->__get(10)) ) ^ ( (int)(iv->b->__get(10)) ))) );
HXDLIN( 255)				out->b[11] = ( (unsigned char)((( (int)(out->b->__get(11)) ) ^ ( (int)(iv->b->__get(11)) ))) );
HXDLIN( 255)				out->b[12] = ( (unsigned char)((( (int)(out->b->__get(12)) ) ^ ( (int)(iv->b->__get(12)) ))) );
HXDLIN( 255)				out->b[13] = ( (unsigned char)((( (int)(out->b->__get(13)) ) ^ ( (int)(iv->b->__get(13)) ))) );
HXDLIN( 255)				out->b[14] = ( (unsigned char)((( (int)(out->b->__get(14)) ) ^ ( (int)(iv->b->__get(14)) ))) );
HXDLIN( 255)				out->b[15] = ( (unsigned char)((( (int)(out->b->__get(15)) ) ^ ( (int)(iv->b->__get(15)) ))) );
            			}
            			else {
HXLINE( 259)				int _g = 0;
HXDLIN( 259)				while((_g < 16)){
HXLINE( 259)					_g = (_g + 1);
HXDLIN( 259)					int j = (_g - 1);
HXLINE( 260)					out->b[(i + j)] = ( (unsigned char)((( (int)(out->b->__get((i + j))) ) ^ ( (int)(out->b->__get((vpos + j))) ))) );
            				}
            			}
            		}
HXLINE( 263)		return out;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CBC_obj,decrypt,return )


CBC_obj::CBC_obj()
{
}

bool CBC_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SBOX") ) { outValue = ( SBOX ); return true; }
		if (HX_FIELD_EQ(inName,"LOG3") ) { outValue = ( LOG3 ); return true; }
		if (HX_FIELD_EQ(inName,"RCON") ) { outValue = ( RCON ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RSBOX") ) { outValue = ( RSBOX ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"POWER3") ) { outValue = ( POWER3 ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotWord") ) { outValue = rotWord_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subWord") ) { outValue = subWord_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"encrypt") ) { outValue = encrypt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"decrypt") ) { outValue = decrypt_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyExpansion") ) { outValue = keyExpansion_dyn(); return true; }
	}
	return false;
}

bool CBC_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SBOX") ) { SBOX=ioValue.Cast< ::Array< int > >(); return true; }
		if (HX_FIELD_EQ(inName,"LOG3") ) { LOG3=ioValue.Cast< ::Array< int > >(); return true; }
		if (HX_FIELD_EQ(inName,"RCON") ) { RCON=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RSBOX") ) { RSBOX=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"POWER3") ) { POWER3=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CBC_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CBC_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &CBC_obj::SBOX,HX_("SBOX",78,0f,0f,37)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &CBC_obj::RSBOX,HX_("RSBOX",ca,a0,ea,6d)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &CBC_obj::POWER3,HX_("POWER3",ae,e4,ea,b2)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &CBC_obj::LOG3,HX_("LOG3",4f,67,78,32)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &CBC_obj::RCON,HX_("RCON",10,9b,66,36)},
	{::hx::fsInt,(void *) &CBC_obj::BLOCK_SIZE,HX_("BLOCK_SIZE",53,f4,76,a2)},
	{::hx::fsInt,(void *) &CBC_obj::NB,HX_("NB",34,44,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CBC_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CBC_obj::SBOX,"SBOX");
	HX_MARK_MEMBER_NAME(CBC_obj::RSBOX,"RSBOX");
	HX_MARK_MEMBER_NAME(CBC_obj::POWER3,"POWER3");
	HX_MARK_MEMBER_NAME(CBC_obj::LOG3,"LOG3");
	HX_MARK_MEMBER_NAME(CBC_obj::RCON,"RCON");
	HX_MARK_MEMBER_NAME(CBC_obj::BLOCK_SIZE,"BLOCK_SIZE");
	HX_MARK_MEMBER_NAME(CBC_obj::NB,"NB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CBC_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CBC_obj::SBOX,"SBOX");
	HX_VISIT_MEMBER_NAME(CBC_obj::RSBOX,"RSBOX");
	HX_VISIT_MEMBER_NAME(CBC_obj::POWER3,"POWER3");
	HX_VISIT_MEMBER_NAME(CBC_obj::LOG3,"LOG3");
	HX_VISIT_MEMBER_NAME(CBC_obj::RCON,"RCON");
	HX_VISIT_MEMBER_NAME(CBC_obj::BLOCK_SIZE,"BLOCK_SIZE");
	HX_VISIT_MEMBER_NAME(CBC_obj::NB,"NB");
};

#endif

::hx::Class CBC_obj::__mClass;

static ::String CBC_obj_sStaticFields[] = {
	HX_("SBOX",78,0f,0f,37),
	HX_("RSBOX",ca,a0,ea,6d),
	HX_("POWER3",ae,e4,ea,b2),
	HX_("LOG3",4f,67,78,32),
	HX_("RCON",10,9b,66,36),
	HX_("BLOCK_SIZE",53,f4,76,a2),
	HX_("NB",34,44,00,00),
	HX_("keyExpansion",60,f1,15,7d),
	HX_("rotWord",81,67,7d,ea),
	HX_("subWord",6a,97,00,1d),
	HX_("encrypt",65,7e,9b,af),
	HX_("decrypt",4d,c8,cf,ec),
	::String(null())
};

void CBC_obj::__register()
{
	CBC_obj _hx_dummy;
	CBC_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.crypto._Aes.CBC",d9,8c,31,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CBC_obj::__GetStatic;
	__mClass->mSetStaticField = &CBC_obj::__SetStatic;
	__mClass->mMarkFunc = CBC_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CBC_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CBC_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CBC_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CBC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CBC_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CBC_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_77_boot)
HXDLIN(  77)		SBOX = ::Array_obj< int >::fromData( _hx_array_data_78318cd9_12,256)->copy();
            	}
{
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_97_boot)
HXDLIN(  97)		RSBOX = ::Array_obj< int >::fromData( _hx_array_data_78318cd9_14,256)->copy();
            	}
{
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_117_boot)
HXDLIN( 117)		POWER3 = ::Array_obj< int >::fromData( _hx_array_data_78318cd9_16,255)->copy();
            	}
{
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_137_boot)
HXDLIN( 137)		LOG3 = ::Array_obj< int >::fromData( _hx_array_data_78318cd9_18,256)->copy();
            	}
{
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_157_boot)
HXDLIN( 157)		RCON = ::Array_obj< int >::fromData( _hx_array_data_78318cd9_20,11)->copy();
            	}
{
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_159_boot)
HXDLIN( 159)		BLOCK_SIZE = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a25d86649de4ab00_160_boot)
HXDLIN( 160)		NB = 4;
            	}
}

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
} // end namespace _Aes
