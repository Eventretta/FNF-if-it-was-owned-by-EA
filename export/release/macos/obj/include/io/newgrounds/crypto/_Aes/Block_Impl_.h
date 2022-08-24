#ifndef INCLUDED_io_newgrounds_crypto__Aes_Block_Impl_
#define INCLUDED_io_newgrounds_crypto__Aes_Block_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(io,newgrounds,crypto,Aes)
HX_DECLARE_CLASS4(io,newgrounds,crypto,_Aes,Block_Impl_)

namespace io{
namespace newgrounds{
namespace crypto{
namespace _Aes{


class HXCPP_CLASS_ATTRIBUTES Block_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Block_Impl__obj OBJ_;
		Block_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0f1ec9ea };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="io.newgrounds.crypto._Aes.Block_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"io.newgrounds.crypto._Aes.Block_Impl_"); }

		inline static ::hx::ObjectPtr< Block_Impl__obj > __new() {
			::hx::ObjectPtr< Block_Impl__obj > __this = new Block_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Block_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Block_Impl__obj *__this = (Block_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Block_Impl__obj), false, "io.newgrounds.crypto._Aes.Block_Impl_"));
			*(void **)__this = Block_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Block_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Block_Impl_",8d,c1,f2,9b); }

		static void __boot();
		static int NB;
		static int BLOCK_SIZE;
		static ::Array< ::Dynamic> _new();
		static ::Dynamic _new_dyn();

		static ::Array< ::Dynamic> readBytes(::Array< ::Dynamic> this1, ::haxe::io::Bytes data,int index);
		static ::Dynamic readBytes_dyn();

		static void writeBytes(::Array< ::Dynamic> this1, ::haxe::io::Bytes data,int index);
		static ::Dynamic writeBytes_dyn();

		static int get(::Array< ::Dynamic> this1,int i,int j);
		static ::Dynamic get_dyn();

		static void encrypt(::Array< ::Dynamic> this1, ::io::newgrounds::crypto::Aes aes);
		static ::Dynamic encrypt_dyn();

		static void decrypt(::Array< ::Dynamic> this1, ::io::newgrounds::crypto::Aes aes);
		static ::Dynamic decrypt_dyn();

		static void subBytes(::Array< ::Dynamic> this1);
		static ::Dynamic subBytes_dyn();

		static void shiftRows(::Array< ::Dynamic> this1);
		static ::Dynamic shiftRows_dyn();

		static void mixColumns(::Array< ::Dynamic> this1);
		static ::Dynamic mixColumns_dyn();

		static void invMixColumns(::Array< ::Dynamic> this1);
		static ::Dynamic invMixColumns_dyn();

		static void invSubBytes(::Array< ::Dynamic> this1);
		static ::Dynamic invSubBytes_dyn();

		static void invShiftRows(::Array< ::Dynamic> this1);
		static ::Dynamic invShiftRows_dyn();

		static void addRoundKey(::Array< ::Dynamic> this1,::Array< int > roundKey,int round);
		static ::Dynamic addRoundKey_dyn();

		static int mul(int a,int b);
		static ::Dynamic mul_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
} // end namespace _Aes

#endif /* INCLUDED_io_newgrounds_crypto__Aes_Block_Impl_ */ 
