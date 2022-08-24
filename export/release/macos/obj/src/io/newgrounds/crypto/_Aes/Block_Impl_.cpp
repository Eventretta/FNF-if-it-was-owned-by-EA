#include <hxcpp.h>

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

HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_273__new,"io.newgrounds.crypto._Aes.Block_Impl_","_new",0xa12d1ead,"io.newgrounds.crypto._Aes.Block_Impl_._new","io/newgrounds/crypto/Aes.hx",273,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_278_readBytes,"io.newgrounds.crypto._Aes.Block_Impl_","readBytes",0x93101869,"io.newgrounds.crypto._Aes.Block_Impl_.readBytes","io/newgrounds/crypto/Aes.hx",278,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_293_writeBytes,"io.newgrounds.crypto._Aes.Block_Impl_","writeBytes",0x4c740d58,"io.newgrounds.crypto._Aes.Block_Impl_.writeBytes","io/newgrounds/crypto/Aes.hx",293,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_300_get,"io.newgrounds.crypto._Aes.Block_Impl_","get",0x93b024ca,"io.newgrounds.crypto._Aes.Block_Impl_.get","io/newgrounds/crypto/Aes.hx",300,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_302_encrypt,"io.newgrounds.crypto._Aes.Block_Impl_","encrypt",0xaf754c99,"io.newgrounds.crypto._Aes.Block_Impl_.encrypt","io/newgrounds/crypto/Aes.hx",302,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_320_decrypt,"io.newgrounds.crypto._Aes.Block_Impl_","decrypt",0xeca99681,"io.newgrounds.crypto._Aes.Block_Impl_.decrypt","io/newgrounds/crypto/Aes.hx",320,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_342_subBytes,"io.newgrounds.crypto._Aes.Block_Impl_","subBytes",0x1171fe17,"io.newgrounds.crypto._Aes.Block_Impl_.subBytes","io/newgrounds/crypto/Aes.hx",342,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_349_shiftRows,"io.newgrounds.crypto._Aes.Block_Impl_","shiftRows",0xdb3939ef,"io.newgrounds.crypto._Aes.Block_Impl_.shiftRows","io/newgrounds/crypto/Aes.hx",349,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_363_mixColumns,"io.newgrounds.crypto._Aes.Block_Impl_","mixColumns",0xef2378ed,"io.newgrounds.crypto._Aes.Block_Impl_.mixColumns","io/newgrounds/crypto/Aes.hx",363,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_382_invMixColumns,"io.newgrounds.crypto._Aes.Block_Impl_","invMixColumns",0xcef8e426,"io.newgrounds.crypto._Aes.Block_Impl_.invMixColumns","io/newgrounds/crypto/Aes.hx",382,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_402_invSubBytes,"io.newgrounds.crypto._Aes.Block_Impl_","invSubBytes",0x9f97f910,"io.newgrounds.crypto._Aes.Block_Impl_.invSubBytes","io/newgrounds/crypto/Aes.hx",402,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_409_invShiftRows,"io.newgrounds.crypto._Aes.Block_Impl_","invShiftRows",0xae4ed8d6,"io.newgrounds.crypto._Aes.Block_Impl_.invShiftRows","io/newgrounds/crypto/Aes.hx",409,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_422_addRoundKey,"io.newgrounds.crypto._Aes.Block_Impl_","addRoundKey",0xee781d66,"io.newgrounds.crypto._Aes.Block_Impl_.addRoundKey","io/newgrounds/crypto/Aes.hx",422,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_434_mul,"io.newgrounds.crypto._Aes.Block_Impl_","mul",0x93b4c038,"io.newgrounds.crypto._Aes.Block_Impl_.mul","io/newgrounds/crypto/Aes.hx",434,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_270_boot,"io.newgrounds.crypto._Aes.Block_Impl_","boot",0xa3298d7e,"io.newgrounds.crypto._Aes.Block_Impl_.boot","io/newgrounds/crypto/Aes.hx",270,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_f8d9b7d5e68b049e_271_boot,"io.newgrounds.crypto._Aes.Block_Impl_","boot",0xa3298d7e,"io.newgrounds.crypto._Aes.Block_Impl_.boot","io/newgrounds/crypto/Aes.hx",271,0xa53cc523)
namespace io{
namespace newgrounds{
namespace crypto{
namespace _Aes{

void Block_Impl__obj::__construct() { }

Dynamic Block_Impl__obj::__CreateEmpty() { return new Block_Impl__obj; }

void *Block_Impl__obj::_hx_vtable = 0;

Dynamic Block_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Block_Impl__obj > _hx_result = new Block_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Block_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f1ec9ea;
}

int Block_Impl__obj::NB;

int Block_Impl__obj::BLOCK_SIZE;

::Array< ::Dynamic> Block_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_273__new)
HXLINE( 275)		::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(4);
HXLINE( 273)		::Array< ::Dynamic> this2 = this1;
HXDLIN( 273)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Block_Impl__obj,_new,return )

::Array< ::Dynamic> Block_Impl__obj::readBytes(::Array< ::Dynamic> this1, ::haxe::io::Bytes data,int index){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_278_readBytes)
HXLINE( 280)		{
HXLINE( 280)			{
HXLINE( 282)				{
HXLINE( 282)					::Array< int > this2 = ::Array_obj< int >::__new(4);
HXDLIN( 282)					this1->__unsafe_set(0,this2);
            				}
HXLINE( 284)				{
HXLINE( 285)					{
HXLINE( 285)						::Array< int > this3 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 285)						this3->__unsafe_set(0,data->b->__get(index));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this4 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 285)						this4->__unsafe_set(1,data->b->__get((index + 1)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this5 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 285)						this5->__unsafe_set(2,data->b->__get((index + 2)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this6 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 285)						this6->__unsafe_set(3,data->b->__get((index + 3)));
            					}
            				}
            			}
HXLINE( 280)			{
HXLINE( 282)				{
HXLINE( 282)					::Array< int > this7 = ::Array_obj< int >::__new(4);
HXDLIN( 282)					this1->__unsafe_set(1,this7);
            				}
HXLINE( 284)				{
HXLINE( 285)					{
HXLINE( 285)						::Array< int > this8 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 285)						this8->__unsafe_set(0,data->b->__get((4 + index)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this9 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 285)						this9->__unsafe_set(1,data->b->__get(((4 + index) + 1)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this10 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 285)						this10->__unsafe_set(2,data->b->__get(((4 + index) + 2)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this11 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 285)						this11->__unsafe_set(3,data->b->__get(((4 + index) + 3)));
            					}
            				}
            			}
HXLINE( 280)			{
HXLINE( 282)				{
HXLINE( 282)					::Array< int > this12 = ::Array_obj< int >::__new(4);
HXDLIN( 282)					this1->__unsafe_set(2,this12);
            				}
HXLINE( 284)				{
HXLINE( 285)					{
HXLINE( 285)						::Array< int > this13 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 285)						this13->__unsafe_set(0,data->b->__get((8 + index)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this14 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 285)						this14->__unsafe_set(1,data->b->__get(((8 + index) + 1)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this15 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 285)						this15->__unsafe_set(2,data->b->__get(((8 + index) + 2)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this16 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 285)						this16->__unsafe_set(3,data->b->__get(((8 + index) + 3)));
            					}
            				}
            			}
HXLINE( 280)			{
HXLINE( 282)				{
HXLINE( 282)					::Array< int > this17 = ::Array_obj< int >::__new(4);
HXDLIN( 282)					this1->__unsafe_set(3,this17);
            				}
HXLINE( 284)				{
HXLINE( 285)					{
HXLINE( 285)						::Array< int > this18 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 285)						this18->__unsafe_set(0,data->b->__get((12 + index)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this19 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 285)						this19->__unsafe_set(1,data->b->__get(((12 + index) + 1)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this20 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 285)						this20->__unsafe_set(2,data->b->__get(((12 + index) + 2)));
            					}
HXDLIN( 285)					{
HXLINE( 285)						::Array< int > this21 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 285)						this21->__unsafe_set(3,data->b->__get(((12 + index) + 3)));
            					}
            				}
            			}
            		}
HXLINE( 288)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Block_Impl__obj,readBytes,return )

void Block_Impl__obj::writeBytes(::Array< ::Dynamic> this1, ::haxe::io::Bytes data,int index){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_293_writeBytes)
HXLINE( 295)		{
HXLINE( 296)			{
HXLINE( 296)				int v = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),0)) );
HXDLIN( 296)				data->b[index] = ( (unsigned char)(v) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v1 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),1)) );
HXDLIN( 296)				data->b[(1 + index)] = ( (unsigned char)(v1) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v2 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),2)) );
HXDLIN( 296)				data->b[(2 + index)] = ( (unsigned char)(v2) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v3 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),3)) );
HXDLIN( 296)				data->b[(3 + index)] = ( (unsigned char)(v3) );
            			}
            		}
HXLINE( 295)		{
HXLINE( 296)			{
HXLINE( 296)				int v4 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),0)) );
HXDLIN( 296)				data->b[(4 + index)] = ( (unsigned char)(v4) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v5 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),1)) );
HXDLIN( 296)				data->b[(5 + index)] = ( (unsigned char)(v5) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v6 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),2)) );
HXDLIN( 296)				data->b[(6 + index)] = ( (unsigned char)(v6) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v7 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),3)) );
HXDLIN( 296)				data->b[(7 + index)] = ( (unsigned char)(v7) );
            			}
            		}
HXLINE( 295)		{
HXLINE( 296)			{
HXLINE( 296)				int v8 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),0)) );
HXDLIN( 296)				data->b[(8 + index)] = ( (unsigned char)(v8) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v9 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),1)) );
HXDLIN( 296)				data->b[(9 + index)] = ( (unsigned char)(v9) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v10 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),2)) );
HXDLIN( 296)				data->b[(10 + index)] = ( (unsigned char)(v10) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v11 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),3)) );
HXDLIN( 296)				data->b[(11 + index)] = ( (unsigned char)(v11) );
            			}
            		}
HXLINE( 295)		{
HXLINE( 296)			{
HXLINE( 296)				int v12 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),0)) );
HXDLIN( 296)				data->b[(12 + index)] = ( (unsigned char)(v12) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v13 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),1)) );
HXDLIN( 296)				data->b[(13 + index)] = ( (unsigned char)(v13) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v14 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),2)) );
HXDLIN( 296)				data->b[(14 + index)] = ( (unsigned char)(v14) );
            			}
HXDLIN( 296)			{
HXLINE( 296)				int v15 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),3)) );
HXDLIN( 296)				data->b[(15 + index)] = ( (unsigned char)(v15) );
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Block_Impl__obj,writeBytes,(void))

int Block_Impl__obj::get(::Array< ::Dynamic> this1,int i,int j){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_300_get)
HXDLIN( 300)		return ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,i)) ),j)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Block_Impl__obj,get,return )

void Block_Impl__obj::encrypt(::Array< ::Dynamic> this1, ::io::newgrounds::crypto::Aes aes){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_302_encrypt)
HXLINE( 304)		::io::newgrounds::crypto::_Aes::Block_Impl__obj::addRoundKey(this1,aes->roundKey,0);
HXLINE( 306)		int nr = ((aes->key->length >> 2) + 6);
HXLINE( 307)		{
HXLINE( 307)			int _g = 1;
HXDLIN( 307)			int _g1 = nr;
HXDLIN( 307)			while((_g < _g1)){
HXLINE( 307)				_g = (_g + 1);
HXDLIN( 307)				int round = (_g - 1);
HXLINE( 309)				::io::newgrounds::crypto::_Aes::Block_Impl__obj::subBytes(this1);
HXLINE( 310)				::io::newgrounds::crypto::_Aes::Block_Impl__obj::shiftRows(this1);
HXLINE( 311)				::io::newgrounds::crypto::_Aes::Block_Impl__obj::mixColumns(this1);
HXLINE( 312)				::io::newgrounds::crypto::_Aes::Block_Impl__obj::addRoundKey(this1,aes->roundKey,round);
            			}
            		}
HXLINE( 315)		::io::newgrounds::crypto::_Aes::Block_Impl__obj::subBytes(this1);
HXLINE( 316)		::io::newgrounds::crypto::_Aes::Block_Impl__obj::shiftRows(this1);
HXLINE( 317)		::io::newgrounds::crypto::_Aes::Block_Impl__obj::addRoundKey(this1,aes->roundKey,nr);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Block_Impl__obj,encrypt,(void))

void Block_Impl__obj::decrypt(::Array< ::Dynamic> this1, ::io::newgrounds::crypto::Aes aes){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_320_decrypt)
HXLINE( 322)		int nr = ((aes->key->length >> 2) + 6);
HXLINE( 323)		::io::newgrounds::crypto::_Aes::Block_Impl__obj::addRoundKey(this1,aes->roundKey,nr);
HXLINE( 325)		int round = (nr - 1);
HXLINE( 326)		while((round > 0)){
HXLINE( 328)			::io::newgrounds::crypto::_Aes::Block_Impl__obj::invShiftRows(this1);
HXLINE( 329)			::io::newgrounds::crypto::_Aes::Block_Impl__obj::invSubBytes(this1);
HXLINE( 330)			::io::newgrounds::crypto::_Aes::Block_Impl__obj::addRoundKey(this1,aes->roundKey,round);
HXLINE( 331)			::io::newgrounds::crypto::_Aes::Block_Impl__obj::invMixColumns(this1);
HXLINE( 332)			round = (round - 1);
            		}
HXLINE( 335)		::io::newgrounds::crypto::_Aes::Block_Impl__obj::invShiftRows(this1);
HXLINE( 336)		::io::newgrounds::crypto::_Aes::Block_Impl__obj::invSubBytes(this1);
HXLINE( 337)		::io::newgrounds::crypto::_Aes::Block_Impl__obj::addRoundKey(this1,aes->roundKey,0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Block_Impl__obj,decrypt,(void))

void Block_Impl__obj::subBytes(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_342_subBytes)
HXLINE( 344)		{
HXLINE( 345)			{
HXLINE( 345)				::Array< int > this2 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 345)				::Array< int > this3 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val = ( (int)(_hx_array_unsafe_get(this3,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),0)) ))) );
HXDLIN( 345)				this2->__unsafe_set(0,val);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this4 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 345)				::Array< int > this5 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val1 = ( (int)(_hx_array_unsafe_get(this5,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),1)) ))) );
HXDLIN( 345)				this4->__unsafe_set(1,val1);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this6 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 345)				::Array< int > this7 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val2 = ( (int)(_hx_array_unsafe_get(this7,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),2)) ))) );
HXDLIN( 345)				this6->__unsafe_set(2,val2);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this8 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 345)				::Array< int > this9 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val3 = ( (int)(_hx_array_unsafe_get(this9,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),3)) ))) );
HXDLIN( 345)				this8->__unsafe_set(3,val3);
            			}
            		}
HXLINE( 344)		{
HXLINE( 345)			{
HXLINE( 345)				::Array< int > this10 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 345)				::Array< int > this11 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val4 = ( (int)(_hx_array_unsafe_get(this11,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),0)) ))) );
HXDLIN( 345)				this10->__unsafe_set(0,val4);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this12 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 345)				::Array< int > this13 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val5 = ( (int)(_hx_array_unsafe_get(this13,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),1)) ))) );
HXDLIN( 345)				this12->__unsafe_set(1,val5);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this14 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 345)				::Array< int > this15 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val6 = ( (int)(_hx_array_unsafe_get(this15,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),2)) ))) );
HXDLIN( 345)				this14->__unsafe_set(2,val6);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this16 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 345)				::Array< int > this17 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val7 = ( (int)(_hx_array_unsafe_get(this17,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),3)) ))) );
HXDLIN( 345)				this16->__unsafe_set(3,val7);
            			}
            		}
HXLINE( 344)		{
HXLINE( 345)			{
HXLINE( 345)				::Array< int > this18 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 345)				::Array< int > this19 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val8 = ( (int)(_hx_array_unsafe_get(this19,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),0)) ))) );
HXDLIN( 345)				this18->__unsafe_set(0,val8);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this20 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 345)				::Array< int > this21 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val9 = ( (int)(_hx_array_unsafe_get(this21,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),1)) ))) );
HXDLIN( 345)				this20->__unsafe_set(1,val9);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this22 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 345)				::Array< int > this23 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val10 = ( (int)(_hx_array_unsafe_get(this23,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),2)) ))) );
HXDLIN( 345)				this22->__unsafe_set(2,val10);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this24 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 345)				::Array< int > this25 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val11 = ( (int)(_hx_array_unsafe_get(this25,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),3)) ))) );
HXDLIN( 345)				this24->__unsafe_set(3,val11);
            			}
            		}
HXLINE( 344)		{
HXLINE( 345)			{
HXLINE( 345)				::Array< int > this26 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 345)				::Array< int > this27 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val12 = ( (int)(_hx_array_unsafe_get(this27,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),0)) ))) );
HXDLIN( 345)				this26->__unsafe_set(0,val12);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this28 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 345)				::Array< int > this29 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val13 = ( (int)(_hx_array_unsafe_get(this29,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),1)) ))) );
HXDLIN( 345)				this28->__unsafe_set(1,val13);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this30 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 345)				::Array< int > this31 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val14 = ( (int)(_hx_array_unsafe_get(this31,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),2)) ))) );
HXDLIN( 345)				this30->__unsafe_set(2,val14);
            			}
HXDLIN( 345)			{
HXLINE( 345)				::Array< int > this32 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 345)				::Array< int > this33 = ::io::newgrounds::crypto::_Aes::CBC_obj::SBOX;
HXDLIN( 345)				int val15 = ( (int)(_hx_array_unsafe_get(this33,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),3)) ))) );
HXDLIN( 345)				this32->__unsafe_set(3,val15);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Block_Impl__obj,subBytes,(void))

void Block_Impl__obj::shiftRows(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_349_shiftRows)
HXLINE( 351)		::Array< int > this2 = ::Array_obj< int >::__new(4);
HXDLIN( 351)		::Array< int > temp = this2;
HXLINE( 352)		{
HXLINE( 352)			{
HXLINE( 354)				{
HXLINE( 355)					{
HXLINE( 355)						int val = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(1,4))) ),1)) );
HXDLIN( 355)						temp->__unsafe_set(0,val);
            					}
HXDLIN( 355)					{
HXLINE( 355)						int val1 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(2,4))) ),1)) );
HXDLIN( 355)						temp->__unsafe_set(1,val1);
            					}
HXDLIN( 355)					{
HXLINE( 355)						int val2 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(3,4))) ),1)) );
HXDLIN( 355)						temp->__unsafe_set(2,val2);
            					}
HXDLIN( 355)					{
HXLINE( 355)						int val3 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(4,4))) ),1)) );
HXDLIN( 355)						temp->__unsafe_set(3,val3);
            					}
            				}
HXLINE( 357)				{
HXLINE( 358)					{
HXLINE( 358)						::Array< int > this3 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 358)						int val4 = ( (int)(_hx_array_unsafe_get(temp,0)) );
HXDLIN( 358)						this3->__unsafe_set(1,val4);
            					}
HXDLIN( 358)					{
HXLINE( 358)						::Array< int > this4 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 358)						int val5 = ( (int)(_hx_array_unsafe_get(temp,1)) );
HXDLIN( 358)						this4->__unsafe_set(1,val5);
            					}
HXDLIN( 358)					{
HXLINE( 358)						::Array< int > this5 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 358)						int val6 = ( (int)(_hx_array_unsafe_get(temp,2)) );
HXDLIN( 358)						this5->__unsafe_set(1,val6);
            					}
HXDLIN( 358)					{
HXLINE( 358)						::Array< int > this6 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 358)						int val7 = ( (int)(_hx_array_unsafe_get(temp,3)) );
HXDLIN( 358)						this6->__unsafe_set(1,val7);
            					}
            				}
            			}
HXLINE( 352)			{
HXLINE( 354)				{
HXLINE( 355)					{
HXLINE( 355)						int val8 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(2,4))) ),2)) );
HXDLIN( 355)						temp->__unsafe_set(0,val8);
            					}
HXDLIN( 355)					{
HXLINE( 355)						int val9 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(3,4))) ),2)) );
HXDLIN( 355)						temp->__unsafe_set(1,val9);
            					}
HXDLIN( 355)					{
HXLINE( 355)						int val10 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(4,4))) ),2)) );
HXDLIN( 355)						temp->__unsafe_set(2,val10);
            					}
HXDLIN( 355)					{
HXLINE( 355)						int val11 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(5,4))) ),2)) );
HXDLIN( 355)						temp->__unsafe_set(3,val11);
            					}
            				}
HXLINE( 357)				{
HXLINE( 358)					{
HXLINE( 358)						::Array< int > this7 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 358)						int val12 = ( (int)(_hx_array_unsafe_get(temp,0)) );
HXDLIN( 358)						this7->__unsafe_set(2,val12);
            					}
HXDLIN( 358)					{
HXLINE( 358)						::Array< int > this8 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 358)						int val13 = ( (int)(_hx_array_unsafe_get(temp,1)) );
HXDLIN( 358)						this8->__unsafe_set(2,val13);
            					}
HXDLIN( 358)					{
HXLINE( 358)						::Array< int > this9 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 358)						int val14 = ( (int)(_hx_array_unsafe_get(temp,2)) );
HXDLIN( 358)						this9->__unsafe_set(2,val14);
            					}
HXDLIN( 358)					{
HXLINE( 358)						::Array< int > this10 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 358)						int val15 = ( (int)(_hx_array_unsafe_get(temp,3)) );
HXDLIN( 358)						this10->__unsafe_set(2,val15);
            					}
            				}
            			}
HXLINE( 352)			{
HXLINE( 354)				{
HXLINE( 355)					{
HXLINE( 355)						int val16 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(3,4))) ),3)) );
HXDLIN( 355)						temp->__unsafe_set(0,val16);
            					}
HXDLIN( 355)					{
HXLINE( 355)						int val17 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(4,4))) ),3)) );
HXDLIN( 355)						temp->__unsafe_set(1,val17);
            					}
HXDLIN( 355)					{
HXLINE( 355)						int val18 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(5,4))) ),3)) );
HXDLIN( 355)						temp->__unsafe_set(2,val18);
            					}
HXDLIN( 355)					{
HXLINE( 355)						int val19 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(6,4))) ),3)) );
HXDLIN( 355)						temp->__unsafe_set(3,val19);
            					}
            				}
HXLINE( 357)				{
HXLINE( 358)					{
HXLINE( 358)						::Array< int > this11 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 358)						int val20 = ( (int)(_hx_array_unsafe_get(temp,0)) );
HXDLIN( 358)						this11->__unsafe_set(3,val20);
            					}
HXDLIN( 358)					{
HXLINE( 358)						::Array< int > this12 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 358)						int val21 = ( (int)(_hx_array_unsafe_get(temp,1)) );
HXDLIN( 358)						this12->__unsafe_set(3,val21);
            					}
HXDLIN( 358)					{
HXLINE( 358)						::Array< int > this13 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 358)						int val22 = ( (int)(_hx_array_unsafe_get(temp,2)) );
HXDLIN( 358)						this13->__unsafe_set(3,val22);
            					}
HXDLIN( 358)					{
HXLINE( 358)						::Array< int > this14 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 358)						int val23 = ( (int)(_hx_array_unsafe_get(temp,3)) );
HXDLIN( 358)						this14->__unsafe_set(3,val23);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Block_Impl__obj,shiftRows,(void))

void Block_Impl__obj::mixColumns(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_363_mixColumns)
HXLINE( 364)		::Array< int > this2 = ::Array_obj< int >::__new(4);
HXDLIN( 364)		::Array< int > temp = this2;
HXLINE( 365)		{
HXLINE( 365)			int _g = 0;
HXDLIN( 365)			while((_g < 4)){
HXLINE( 365)				_g = (_g + 1);
HXDLIN( 365)				int i = (_g - 1);
HXLINE( 367)				{
HXLINE( 368)					{
HXLINE( 368)						int val = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,i)) ),0)) );
HXDLIN( 368)						temp->__unsafe_set(0,val);
            					}
HXDLIN( 368)					{
HXLINE( 368)						int val1 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,i)) ),1)) );
HXDLIN( 368)						temp->__unsafe_set(1,val1);
            					}
HXDLIN( 368)					{
HXLINE( 368)						int val2 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,i)) ),2)) );
HXDLIN( 368)						temp->__unsafe_set(2,val2);
            					}
HXDLIN( 368)					{
HXLINE( 368)						int val3 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,i)) ),3)) );
HXDLIN( 368)						temp->__unsafe_set(3,val3);
            					}
            				}
HXLINE( 370)				{
HXLINE( 372)					{
HXLINE( 372)						::Array< int > this2 = ( (::Array< int >)(_hx_array_unsafe_get(this1,i)) );
HXLINE( 373)						int val4 = ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(2,( (int)(_hx_array_unsafe_get(temp,0)) ));
HXDLIN( 373)						int val5 = (val4 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(3,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(1,4))) )));
HXDLIN( 373)						int val6 = (val5 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(1,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(2,4))) )));
HXLINE( 372)						int val7 = (val6 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(1,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(3,4))) )));
HXDLIN( 372)						this2->__unsafe_set(0,val7);
            					}
HXDLIN( 372)					{
HXLINE( 372)						::Array< int > this3 = ( (::Array< int >)(_hx_array_unsafe_get(this1,i)) );
HXLINE( 373)						int val8 = ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(2,( (int)(_hx_array_unsafe_get(temp,1)) ));
HXDLIN( 373)						int val9 = (val8 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(3,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(2,4))) )));
HXDLIN( 373)						int val10 = (val9 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(1,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(3,4))) )));
HXLINE( 372)						int val11 = (val10 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(1,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(4,4))) )));
HXDLIN( 372)						this3->__unsafe_set(1,val11);
            					}
HXDLIN( 372)					{
HXLINE( 372)						::Array< int > this4 = ( (::Array< int >)(_hx_array_unsafe_get(this1,i)) );
HXLINE( 373)						int val12 = ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(2,( (int)(_hx_array_unsafe_get(temp,2)) ));
HXDLIN( 373)						int val13 = (val12 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(3,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(3,4))) )));
HXDLIN( 373)						int val14 = (val13 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(1,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(4,4))) )));
HXLINE( 372)						int val15 = (val14 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(1,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(5,4))) )));
HXDLIN( 372)						this4->__unsafe_set(2,val15);
            					}
HXDLIN( 372)					{
HXLINE( 372)						::Array< int > this5 = ( (::Array< int >)(_hx_array_unsafe_get(this1,i)) );
HXLINE( 373)						int val16 = ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(2,( (int)(_hx_array_unsafe_get(temp,3)) ));
HXDLIN( 373)						int val17 = (val16 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(3,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(4,4))) )));
HXDLIN( 373)						int val18 = (val17 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(1,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(5,4))) )));
HXLINE( 372)						int val19 = (val18 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(1,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(6,4))) )));
HXDLIN( 372)						this5->__unsafe_set(3,val19);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Block_Impl__obj,mixColumns,(void))

void Block_Impl__obj::invMixColumns(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_382_invMixColumns)
HXLINE( 383)		::Array< int > this2 = ::Array_obj< int >::__new(4);
HXDLIN( 383)		::Array< int > temp = this2;
HXLINE( 384)		{
HXLINE( 384)			int _g = 0;
HXDLIN( 384)			while((_g < 4)){
HXLINE( 384)				_g = (_g + 1);
HXDLIN( 384)				int i = (_g - 1);
HXLINE( 386)				{
HXLINE( 387)					{
HXLINE( 387)						int val = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,i)) ),0)) );
HXDLIN( 387)						temp->__unsafe_set(0,val);
            					}
HXDLIN( 387)					{
HXLINE( 387)						int val1 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,i)) ),1)) );
HXDLIN( 387)						temp->__unsafe_set(1,val1);
            					}
HXDLIN( 387)					{
HXLINE( 387)						int val2 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,i)) ),2)) );
HXDLIN( 387)						temp->__unsafe_set(2,val2);
            					}
HXDLIN( 387)					{
HXLINE( 387)						int val3 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,i)) ),3)) );
HXDLIN( 387)						temp->__unsafe_set(3,val3);
            					}
            				}
HXLINE( 389)				{
HXLINE( 391)					{
HXLINE( 391)						::Array< int > this2 = ( (::Array< int >)(_hx_array_unsafe_get(this1,i)) );
HXLINE( 392)						int val4 = ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(14,( (int)(_hx_array_unsafe_get(temp,0)) ));
HXDLIN( 392)						int val5 = (val4 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(11,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(1,4))) )));
HXDLIN( 392)						int val6 = (val5 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(13,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(2,4))) )));
HXLINE( 391)						int val7 = (val6 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(9,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(3,4))) )));
HXDLIN( 391)						this2->__unsafe_set(0,val7);
            					}
HXDLIN( 391)					{
HXLINE( 391)						::Array< int > this3 = ( (::Array< int >)(_hx_array_unsafe_get(this1,i)) );
HXLINE( 392)						int val8 = ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(14,( (int)(_hx_array_unsafe_get(temp,1)) ));
HXDLIN( 392)						int val9 = (val8 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(11,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(2,4))) )));
HXDLIN( 392)						int val10 = (val9 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(13,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(3,4))) )));
HXLINE( 391)						int val11 = (val10 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(9,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(4,4))) )));
HXDLIN( 391)						this3->__unsafe_set(1,val11);
            					}
HXDLIN( 391)					{
HXLINE( 391)						::Array< int > this4 = ( (::Array< int >)(_hx_array_unsafe_get(this1,i)) );
HXLINE( 392)						int val12 = ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(14,( (int)(_hx_array_unsafe_get(temp,2)) ));
HXDLIN( 392)						int val13 = (val12 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(11,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(3,4))) )));
HXDLIN( 392)						int val14 = (val13 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(13,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(4,4))) )));
HXLINE( 391)						int val15 = (val14 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(9,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(5,4))) )));
HXDLIN( 391)						this4->__unsafe_set(2,val15);
            					}
HXDLIN( 391)					{
HXLINE( 391)						::Array< int > this5 = ( (::Array< int >)(_hx_array_unsafe_get(this1,i)) );
HXLINE( 392)						int val16 = ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(14,( (int)(_hx_array_unsafe_get(temp,3)) ));
HXDLIN( 392)						int val17 = (val16 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(11,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(4,4))) )));
HXDLIN( 392)						int val18 = (val17 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(13,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(5,4))) )));
HXLINE( 391)						int val19 = (val18 ^ ::io::newgrounds::crypto::_Aes::Block_Impl__obj::mul(9,( (int)(_hx_array_unsafe_get(temp,::hx::Mod(6,4))) )));
HXDLIN( 391)						this5->__unsafe_set(3,val19);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Block_Impl__obj,invMixColumns,(void))

void Block_Impl__obj::invSubBytes(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_402_invSubBytes)
HXLINE( 404)		{
HXLINE( 405)			{
HXLINE( 405)				::Array< int > this2 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 405)				::Array< int > this3 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val = ( (int)(_hx_array_unsafe_get(this3,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),0)) ))) );
HXDLIN( 405)				this2->__unsafe_set(0,val);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this4 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 405)				::Array< int > this5 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val1 = ( (int)(_hx_array_unsafe_get(this5,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),0)) ))) );
HXDLIN( 405)				this4->__unsafe_set(0,val1);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this6 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 405)				::Array< int > this7 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val2 = ( (int)(_hx_array_unsafe_get(this7,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),0)) ))) );
HXDLIN( 405)				this6->__unsafe_set(0,val2);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this8 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 405)				::Array< int > this9 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val3 = ( (int)(_hx_array_unsafe_get(this9,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),0)) ))) );
HXDLIN( 405)				this8->__unsafe_set(0,val3);
            			}
            		}
HXLINE( 404)		{
HXLINE( 405)			{
HXLINE( 405)				::Array< int > this10 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 405)				::Array< int > this11 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val4 = ( (int)(_hx_array_unsafe_get(this11,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),1)) ))) );
HXDLIN( 405)				this10->__unsafe_set(1,val4);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this12 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 405)				::Array< int > this13 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val5 = ( (int)(_hx_array_unsafe_get(this13,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),1)) ))) );
HXDLIN( 405)				this12->__unsafe_set(1,val5);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this14 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 405)				::Array< int > this15 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val6 = ( (int)(_hx_array_unsafe_get(this15,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),1)) ))) );
HXDLIN( 405)				this14->__unsafe_set(1,val6);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this16 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 405)				::Array< int > this17 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val7 = ( (int)(_hx_array_unsafe_get(this17,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),1)) ))) );
HXDLIN( 405)				this16->__unsafe_set(1,val7);
            			}
            		}
HXLINE( 404)		{
HXLINE( 405)			{
HXLINE( 405)				::Array< int > this18 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 405)				::Array< int > this19 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val8 = ( (int)(_hx_array_unsafe_get(this19,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),2)) ))) );
HXDLIN( 405)				this18->__unsafe_set(2,val8);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this20 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 405)				::Array< int > this21 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val9 = ( (int)(_hx_array_unsafe_get(this21,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),2)) ))) );
HXDLIN( 405)				this20->__unsafe_set(2,val9);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this22 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 405)				::Array< int > this23 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val10 = ( (int)(_hx_array_unsafe_get(this23,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),2)) ))) );
HXDLIN( 405)				this22->__unsafe_set(2,val10);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this24 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 405)				::Array< int > this25 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val11 = ( (int)(_hx_array_unsafe_get(this25,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),2)) ))) );
HXDLIN( 405)				this24->__unsafe_set(2,val11);
            			}
            		}
HXLINE( 404)		{
HXLINE( 405)			{
HXLINE( 405)				::Array< int > this26 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 405)				::Array< int > this27 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val12 = ( (int)(_hx_array_unsafe_get(this27,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,0)) ),3)) ))) );
HXDLIN( 405)				this26->__unsafe_set(3,val12);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this28 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 405)				::Array< int > this29 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val13 = ( (int)(_hx_array_unsafe_get(this29,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,1)) ),3)) ))) );
HXDLIN( 405)				this28->__unsafe_set(3,val13);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this30 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 405)				::Array< int > this31 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val14 = ( (int)(_hx_array_unsafe_get(this31,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,2)) ),3)) ))) );
HXDLIN( 405)				this30->__unsafe_set(3,val14);
            			}
HXDLIN( 405)			{
HXLINE( 405)				::Array< int > this32 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 405)				::Array< int > this33 = ::io::newgrounds::crypto::_Aes::CBC_obj::RSBOX;
HXDLIN( 405)				int val15 = ( (int)(_hx_array_unsafe_get(this33,( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,3)) ),3)) ))) );
HXDLIN( 405)				this32->__unsafe_set(3,val15);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Block_Impl__obj,invSubBytes,(void))

void Block_Impl__obj::invShiftRows(::Array< ::Dynamic> this1){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_409_invShiftRows)
HXLINE( 411)		::Array< int > this2 = ::Array_obj< int >::__new(4);
HXDLIN( 411)		::Array< int > temp = this2;
HXLINE( 412)		{
HXLINE( 412)			{
HXLINE( 414)				{
HXLINE( 415)					{
HXLINE( 415)						int val = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(3,4))) ),1)) );
HXDLIN( 415)						temp->__unsafe_set(0,val);
            					}
HXDLIN( 415)					{
HXLINE( 415)						int val1 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(4,4))) ),1)) );
HXDLIN( 415)						temp->__unsafe_set(1,val1);
            					}
HXDLIN( 415)					{
HXLINE( 415)						int val2 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(5,4))) ),1)) );
HXDLIN( 415)						temp->__unsafe_set(2,val2);
            					}
HXDLIN( 415)					{
HXLINE( 415)						int val3 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(6,4))) ),1)) );
HXDLIN( 415)						temp->__unsafe_set(3,val3);
            					}
            				}
HXLINE( 417)				{
HXLINE( 418)					{
HXLINE( 418)						::Array< int > this3 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 418)						int val4 = ( (int)(_hx_array_unsafe_get(temp,0)) );
HXDLIN( 418)						this3->__unsafe_set(1,val4);
            					}
HXDLIN( 418)					{
HXLINE( 418)						::Array< int > this4 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 418)						int val5 = ( (int)(_hx_array_unsafe_get(temp,1)) );
HXDLIN( 418)						this4->__unsafe_set(1,val5);
            					}
HXDLIN( 418)					{
HXLINE( 418)						::Array< int > this5 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 418)						int val6 = ( (int)(_hx_array_unsafe_get(temp,2)) );
HXDLIN( 418)						this5->__unsafe_set(1,val6);
            					}
HXDLIN( 418)					{
HXLINE( 418)						::Array< int > this6 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 418)						int val7 = ( (int)(_hx_array_unsafe_get(temp,3)) );
HXDLIN( 418)						this6->__unsafe_set(1,val7);
            					}
            				}
            			}
HXLINE( 412)			{
HXLINE( 414)				{
HXLINE( 415)					{
HXLINE( 415)						int val8 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(2,4))) ),2)) );
HXDLIN( 415)						temp->__unsafe_set(0,val8);
            					}
HXDLIN( 415)					{
HXLINE( 415)						int val9 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(3,4))) ),2)) );
HXDLIN( 415)						temp->__unsafe_set(1,val9);
            					}
HXDLIN( 415)					{
HXLINE( 415)						int val10 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(4,4))) ),2)) );
HXDLIN( 415)						temp->__unsafe_set(2,val10);
            					}
HXDLIN( 415)					{
HXLINE( 415)						int val11 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(5,4))) ),2)) );
HXDLIN( 415)						temp->__unsafe_set(3,val11);
            					}
            				}
HXLINE( 417)				{
HXLINE( 418)					{
HXLINE( 418)						::Array< int > this7 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 418)						int val12 = ( (int)(_hx_array_unsafe_get(temp,0)) );
HXDLIN( 418)						this7->__unsafe_set(2,val12);
            					}
HXDLIN( 418)					{
HXLINE( 418)						::Array< int > this8 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 418)						int val13 = ( (int)(_hx_array_unsafe_get(temp,1)) );
HXDLIN( 418)						this8->__unsafe_set(2,val13);
            					}
HXDLIN( 418)					{
HXLINE( 418)						::Array< int > this9 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 418)						int val14 = ( (int)(_hx_array_unsafe_get(temp,2)) );
HXDLIN( 418)						this9->__unsafe_set(2,val14);
            					}
HXDLIN( 418)					{
HXLINE( 418)						::Array< int > this10 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 418)						int val15 = ( (int)(_hx_array_unsafe_get(temp,3)) );
HXDLIN( 418)						this10->__unsafe_set(2,val15);
            					}
            				}
            			}
HXLINE( 412)			{
HXLINE( 414)				{
HXLINE( 415)					{
HXLINE( 415)						int val16 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(1,4))) ),3)) );
HXDLIN( 415)						temp->__unsafe_set(0,val16);
            					}
HXDLIN( 415)					{
HXLINE( 415)						int val17 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(2,4))) ),3)) );
HXDLIN( 415)						temp->__unsafe_set(1,val17);
            					}
HXDLIN( 415)					{
HXLINE( 415)						int val18 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(3,4))) ),3)) );
HXDLIN( 415)						temp->__unsafe_set(2,val18);
            					}
HXDLIN( 415)					{
HXLINE( 415)						int val19 = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(this1,::hx::Mod(4,4))) ),3)) );
HXDLIN( 415)						temp->__unsafe_set(3,val19);
            					}
            				}
HXLINE( 417)				{
HXLINE( 418)					{
HXLINE( 418)						::Array< int > this11 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 418)						int val20 = ( (int)(_hx_array_unsafe_get(temp,0)) );
HXDLIN( 418)						this11->__unsafe_set(3,val20);
            					}
HXDLIN( 418)					{
HXLINE( 418)						::Array< int > this12 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 418)						int val21 = ( (int)(_hx_array_unsafe_get(temp,1)) );
HXDLIN( 418)						this12->__unsafe_set(3,val21);
            					}
HXDLIN( 418)					{
HXLINE( 418)						::Array< int > this13 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 418)						int val22 = ( (int)(_hx_array_unsafe_get(temp,2)) );
HXDLIN( 418)						this13->__unsafe_set(3,val22);
            					}
HXDLIN( 418)					{
HXLINE( 418)						::Array< int > this14 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 418)						int val23 = ( (int)(_hx_array_unsafe_get(temp,3)) );
HXDLIN( 418)						this14->__unsafe_set(3,val23);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Block_Impl__obj,invShiftRows,(void))

void Block_Impl__obj::addRoundKey(::Array< ::Dynamic> this1,::Array< int > roundKey,int round){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_422_addRoundKey)
HXLINE( 424)		round = (round << 2);
HXLINE( 425)		{
HXLINE( 427)			{
HXLINE( 428)				{
HXLINE( 428)					int _g = 0;
HXDLIN( 428)					::Array< int > _g1 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 428)					{
HXLINE( 428)						int val = ( (int)(_hx_array_unsafe_get(_g1,_g)) );
HXDLIN( 428)						int val1 = (val ^ ( (int)(_hx_array_unsafe_get(roundKey,(round * 4))) ));
HXDLIN( 428)						_g1->__unsafe_set(_g,val1);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g2 = 1;
HXDLIN( 428)					::Array< int > _g3 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 428)					{
HXLINE( 428)						int val2 = ( (int)(_hx_array_unsafe_get(_g3,_g2)) );
HXDLIN( 428)						int val3 = (val2 ^ ( (int)(_hx_array_unsafe_get(roundKey,((round * 4) + 1))) ));
HXDLIN( 428)						_g3->__unsafe_set(_g2,val3);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g4 = 2;
HXDLIN( 428)					::Array< int > _g5 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 428)					{
HXLINE( 428)						int val4 = ( (int)(_hx_array_unsafe_get(_g5,_g4)) );
HXDLIN( 428)						int val5 = (val4 ^ ( (int)(_hx_array_unsafe_get(roundKey,((round * 4) + 2))) ));
HXDLIN( 428)						_g5->__unsafe_set(_g4,val5);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g6 = 3;
HXDLIN( 428)					::Array< int > _g7 = ( (::Array< int >)(_hx_array_unsafe_get(this1,0)) );
HXDLIN( 428)					{
HXLINE( 428)						int val6 = ( (int)(_hx_array_unsafe_get(_g7,_g6)) );
HXDLIN( 428)						int val7 = (val6 ^ ( (int)(_hx_array_unsafe_get(roundKey,((round * 4) + 3))) ));
HXDLIN( 428)						_g7->__unsafe_set(_g6,val7);
            					}
            				}
            			}
HXLINE( 427)			{
HXLINE( 428)				{
HXLINE( 428)					int _g8 = 0;
HXDLIN( 428)					::Array< int > _g9 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 428)					{
HXLINE( 428)						int val8 = ( (int)(_hx_array_unsafe_get(_g9,_g8)) );
HXDLIN( 428)						int val9 = (val8 ^ ( (int)(_hx_array_unsafe_get(roundKey,((round * 4) + 4))) ));
HXDLIN( 428)						_g9->__unsafe_set(_g8,val9);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g10 = 1;
HXDLIN( 428)					::Array< int > _g11 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 428)					{
HXLINE( 428)						int val10 = ( (int)(_hx_array_unsafe_get(_g11,_g10)) );
HXDLIN( 428)						int val11 = (val10 ^ ( (int)(_hx_array_unsafe_get(roundKey,(((round * 4) + 4) + 1))) ));
HXDLIN( 428)						_g11->__unsafe_set(_g10,val11);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g12 = 2;
HXDLIN( 428)					::Array< int > _g13 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 428)					{
HXLINE( 428)						int val12 = ( (int)(_hx_array_unsafe_get(_g13,_g12)) );
HXDLIN( 428)						int val13 = (val12 ^ ( (int)(_hx_array_unsafe_get(roundKey,(((round * 4) + 4) + 2))) ));
HXDLIN( 428)						_g13->__unsafe_set(_g12,val13);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g14 = 3;
HXDLIN( 428)					::Array< int > _g15 = ( (::Array< int >)(_hx_array_unsafe_get(this1,1)) );
HXDLIN( 428)					{
HXLINE( 428)						int val14 = ( (int)(_hx_array_unsafe_get(_g15,_g14)) );
HXDLIN( 428)						int val15 = (val14 ^ ( (int)(_hx_array_unsafe_get(roundKey,(((round * 4) + 4) + 3))) ));
HXDLIN( 428)						_g15->__unsafe_set(_g14,val15);
            					}
            				}
            			}
HXLINE( 427)			{
HXLINE( 428)				{
HXLINE( 428)					int _g16 = 0;
HXDLIN( 428)					::Array< int > _g17 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 428)					{
HXLINE( 428)						int val16 = ( (int)(_hx_array_unsafe_get(_g17,_g16)) );
HXDLIN( 428)						int val17 = (val16 ^ ( (int)(_hx_array_unsafe_get(roundKey,((round * 4) + 8))) ));
HXDLIN( 428)						_g17->__unsafe_set(_g16,val17);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g18 = 1;
HXDLIN( 428)					::Array< int > _g19 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 428)					{
HXLINE( 428)						int val18 = ( (int)(_hx_array_unsafe_get(_g19,_g18)) );
HXDLIN( 428)						int val19 = (val18 ^ ( (int)(_hx_array_unsafe_get(roundKey,(((round * 4) + 8) + 1))) ));
HXDLIN( 428)						_g19->__unsafe_set(_g18,val19);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g20 = 2;
HXDLIN( 428)					::Array< int > _g21 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 428)					{
HXLINE( 428)						int val20 = ( (int)(_hx_array_unsafe_get(_g21,_g20)) );
HXDLIN( 428)						int val21 = (val20 ^ ( (int)(_hx_array_unsafe_get(roundKey,(((round * 4) + 8) + 2))) ));
HXDLIN( 428)						_g21->__unsafe_set(_g20,val21);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g22 = 3;
HXDLIN( 428)					::Array< int > _g23 = ( (::Array< int >)(_hx_array_unsafe_get(this1,2)) );
HXDLIN( 428)					{
HXLINE( 428)						int val22 = ( (int)(_hx_array_unsafe_get(_g23,_g22)) );
HXDLIN( 428)						int val23 = (val22 ^ ( (int)(_hx_array_unsafe_get(roundKey,(((round * 4) + 8) + 3))) ));
HXDLIN( 428)						_g23->__unsafe_set(_g22,val23);
            					}
            				}
            			}
HXLINE( 427)			{
HXLINE( 428)				{
HXLINE( 428)					int _g24 = 0;
HXDLIN( 428)					::Array< int > _g25 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 428)					{
HXLINE( 428)						int val24 = ( (int)(_hx_array_unsafe_get(_g25,_g24)) );
HXDLIN( 428)						int val25 = (val24 ^ ( (int)(_hx_array_unsafe_get(roundKey,((round * 4) + 12))) ));
HXDLIN( 428)						_g25->__unsafe_set(_g24,val25);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g26 = 1;
HXDLIN( 428)					::Array< int > _g27 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 428)					{
HXLINE( 428)						int val26 = ( (int)(_hx_array_unsafe_get(_g27,_g26)) );
HXDLIN( 428)						int val27 = (val26 ^ ( (int)(_hx_array_unsafe_get(roundKey,(((round * 4) + 12) + 1))) ));
HXDLIN( 428)						_g27->__unsafe_set(_g26,val27);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g28 = 2;
HXDLIN( 428)					::Array< int > _g29 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 428)					{
HXLINE( 428)						int val28 = ( (int)(_hx_array_unsafe_get(_g29,_g28)) );
HXDLIN( 428)						int val29 = (val28 ^ ( (int)(_hx_array_unsafe_get(roundKey,(((round * 4) + 12) + 2))) ));
HXDLIN( 428)						_g29->__unsafe_set(_g28,val29);
            					}
            				}
HXDLIN( 428)				{
HXLINE( 428)					int _g30 = 3;
HXDLIN( 428)					::Array< int > _g31 = ( (::Array< int >)(_hx_array_unsafe_get(this1,3)) );
HXDLIN( 428)					{
HXLINE( 428)						int val30 = ( (int)(_hx_array_unsafe_get(_g31,_g30)) );
HXDLIN( 428)						int val31 = (val30 ^ ( (int)(_hx_array_unsafe_get(roundKey,(((round * 4) + 12) + 3))) ));
HXDLIN( 428)						_g31->__unsafe_set(_g30,val31);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Block_Impl__obj,addRoundKey,(void))

int Block_Impl__obj::mul(int a,int b){
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_434_mul)
HXDLIN( 434)		bool _hx_tmp;
HXDLIN( 434)		if ((a != 0)) {
HXDLIN( 434)			_hx_tmp = (b != 0);
            		}
            		else {
HXDLIN( 434)			_hx_tmp = false;
            		}
HXDLIN( 434)		if (_hx_tmp) {
HXLINE( 435)			::Array< int > this1 = ::io::newgrounds::crypto::_Aes::CBC_obj::POWER3;
HXDLIN( 435)			int index = ( (int)(_hx_array_unsafe_get(::io::newgrounds::crypto::_Aes::CBC_obj::LOG3,a)) );
HXDLIN( 435)			return ( (int)(_hx_array_unsafe_get(this1,::hx::Mod((index + _hx_array_unsafe_get(::io::newgrounds::crypto::_Aes::CBC_obj::LOG3,b)),255))) );
            		}
            		else {
HXLINE( 436)			return 0;
            		}
HXLINE( 434)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Block_Impl__obj,mul,return )


Block_Impl__obj::Block_Impl__obj()
{
}

bool Block_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mul") ) { outValue = mul_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"encrypt") ) { outValue = encrypt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"decrypt") ) { outValue = decrypt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subBytes") ) { outValue = subBytes_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { outValue = readBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"shiftRows") ) { outValue = shiftRows_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { outValue = writeBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mixColumns") ) { outValue = mixColumns_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invSubBytes") ) { outValue = invSubBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addRoundKey") ) { outValue = addRoundKey_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"invShiftRows") ) { outValue = invShiftRows_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invMixColumns") ) { outValue = invMixColumns_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Block_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Block_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Block_Impl__obj::NB,HX_("NB",34,44,00,00)},
	{::hx::fsInt,(void *) &Block_Impl__obj::BLOCK_SIZE,HX_("BLOCK_SIZE",53,f4,76,a2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Block_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Block_Impl__obj::NB,"NB");
	HX_MARK_MEMBER_NAME(Block_Impl__obj::BLOCK_SIZE,"BLOCK_SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Block_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Block_Impl__obj::NB,"NB");
	HX_VISIT_MEMBER_NAME(Block_Impl__obj::BLOCK_SIZE,"BLOCK_SIZE");
};

#endif

::hx::Class Block_Impl__obj::__mClass;

static ::String Block_Impl__obj_sStaticFields[] = {
	HX_("NB",34,44,00,00),
	HX_("BLOCK_SIZE",53,f4,76,a2),
	HX_("_new",61,15,1f,3f),
	HX_("readBytes",35,55,7f,8e),
	HX_("writeBytes",0c,03,5a,52),
	HX_("get",96,80,4e,00),
	HX_("encrypt",65,7e,9b,af),
	HX_("decrypt",4d,c8,cf,ec),
	HX_("subBytes",cb,5e,b7,32),
	HX_("shiftRows",bb,76,a8,d6),
	HX_("mixColumns",a1,6e,09,f5),
	HX_("invMixColumns",f2,76,74,2e),
	HX_("invSubBytes",dc,00,e9,c2),
	HX_("invShiftRows",8a,a3,e4,71),
	HX_("addRoundKey",32,25,c9,11),
	HX_("mul",04,1c,53,00),
	::String(null())
};

void Block_Impl__obj::__register()
{
	Block_Impl__obj _hx_dummy;
	Block_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.crypto._Aes.Block_Impl_",a2,da,9a,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Block_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Block_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Block_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Block_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Block_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Block_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Block_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Block_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_270_boot)
HXDLIN( 270)		NB = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f8d9b7d5e68b049e_271_boot)
HXDLIN( 271)		BLOCK_SIZE = 16;
            	}
}

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
} // end namespace _Aes
