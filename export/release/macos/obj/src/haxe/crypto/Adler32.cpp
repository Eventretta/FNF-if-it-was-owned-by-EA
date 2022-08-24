#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cf1d6fcadc51d38_32_new,"haxe.crypto.Adler32","new",0xc900c8e2,"haxe.crypto.Adler32.new","/usr/local/lib/haxe/std/haxe/crypto/Adler32.hx",32,0x49ea286b)
HX_LOCAL_STACK_FRAME(_hx_pos_3cf1d6fcadc51d38_41_update,"haxe.crypto.Adler32","update",0xb4b14ac7,"haxe.crypto.Adler32.update","/usr/local/lib/haxe/std/haxe/crypto/Adler32.hx",41,0x49ea286b)
HX_LOCAL_STACK_FRAME(_hx_pos_3cf1d6fcadc51d38_53_equals,"haxe.crypto.Adler32","equals",0xed9eb2fd,"haxe.crypto.Adler32.equals","/usr/local/lib/haxe/std/haxe/crypto/Adler32.hx",53,0x49ea286b)
HX_LOCAL_STACK_FRAME(_hx_pos_3cf1d6fcadc51d38_60_read,"haxe.crypto.Adler32","read",0x1a53c494,"haxe.crypto.Adler32.read","/usr/local/lib/haxe/std/haxe/crypto/Adler32.hx",60,0x49ea286b)
namespace haxe{
namespace crypto{

void Adler32_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3cf1d6fcadc51d38_32_new)
HXLINE(  33)		this->a1 = 1;
HXLINE(  34)		this->a2 = 0;
            	}

Dynamic Adler32_obj::__CreateEmpty() { return new Adler32_obj; }

void *Adler32_obj::_hx_vtable = 0;

Dynamic Adler32_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Adler32_obj > _hx_result = new Adler32_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Adler32_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7726804e;
}

void Adler32_obj::update( ::haxe::io::Bytes b,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_3cf1d6fcadc51d38_41_update)
HXLINE(  42)		int a1 = this->a1;
HXDLIN(  42)		int a2 = this->a2;
HXLINE(  43)		{
HXLINE(  43)			int _g = pos;
HXDLIN(  43)			int _g1 = (pos + len);
HXDLIN(  43)			while((_g < _g1)){
HXLINE(  43)				_g = (_g + 1);
HXDLIN(  43)				int p = (_g - 1);
HXLINE(  44)				int c = ( (int)(b->b->__get(p)) );
HXLINE(  45)				a1 = ::hx::Mod((a1 + c),65521);
HXLINE(  46)				a2 = ::hx::Mod((a2 + a1),65521);
            			}
            		}
HXLINE(  48)		this->a1 = a1;
HXLINE(  49)		this->a2 = a2;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Adler32_obj,update,(void))

bool Adler32_obj::equals( ::haxe::crypto::Adler32 a){
            	HX_STACKFRAME(&_hx_pos_3cf1d6fcadc51d38_53_equals)
HXDLIN(  53)		if ((a->a1 == this->a1)) {
HXDLIN(  53)			return (a->a2 == this->a2);
            		}
            		else {
HXDLIN(  53)			return false;
            		}
HXDLIN(  53)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Adler32_obj,equals,return )

 ::haxe::crypto::Adler32 Adler32_obj::read( ::haxe::io::Input i){
            	HX_GC_STACKFRAME(&_hx_pos_3cf1d6fcadc51d38_60_read)
HXLINE(  61)		 ::haxe::crypto::Adler32 a =  ::haxe::crypto::Adler32_obj::__alloc( HX_CTX );
HXLINE(  62)		int a2a = i->readByte();
HXLINE(  63)		int a2b = i->readByte();
HXLINE(  64)		int a1a = i->readByte();
HXLINE(  65)		int a1b = i->readByte();
HXLINE(  66)		a->a1 = ((a1a << 8) | a1b);
HXLINE(  67)		a->a2 = ((a2a << 8) | a2b);
HXLINE(  68)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Adler32_obj,read,return )


::hx::ObjectPtr< Adler32_obj > Adler32_obj::__new() {
	::hx::ObjectPtr< Adler32_obj > __this = new Adler32_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Adler32_obj > Adler32_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Adler32_obj *__this = (Adler32_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Adler32_obj), false, "haxe.crypto.Adler32"));
	*(void **)__this = Adler32_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Adler32_obj::Adler32_obj()
{
}

::hx::Val Adler32_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"a1") ) { return ::hx::Val( a1 ); }
		if (HX_FIELD_EQ(inName,"a2") ) { return ::hx::Val( a2 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Adler32_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true; }
	}
	return false;
}

::hx::Val Adler32_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"a1") ) { a1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2") ) { a2=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Adler32_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a1",b0,54,00,00));
	outFields->push(HX_("a2",b1,54,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Adler32_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Adler32_obj,a1),HX_("a1",b0,54,00,00)},
	{::hx::fsInt,(int)offsetof(Adler32_obj,a2),HX_("a2",b1,54,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Adler32_obj_sStaticStorageInfo = 0;
#endif

static ::String Adler32_obj_sMemberFields[] = {
	HX_("a1",b0,54,00,00),
	HX_("a2",b1,54,00,00),
	HX_("update",09,86,05,87),
	HX_("equals",3f,ee,f2,bf),
	::String(null()) };

::hx::Class Adler32_obj::__mClass;

static ::String Adler32_obj_sStaticFields[] = {
	HX_("read",56,4b,a7,4b),
	::String(null())
};

void Adler32_obj::__register()
{
	Adler32_obj _hx_dummy;
	Adler32_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.crypto.Adler32",f0,6f,b6,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Adler32_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Adler32_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Adler32_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Adler32_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Adler32_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Adler32_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace crypto
