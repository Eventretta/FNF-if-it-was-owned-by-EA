#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_polymod_Framework
#include <polymod/Framework.h>
#endif
#ifndef INCLUDED_polymod_ModMetadata
#include <polymod/ModMetadata.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_PolymodConfig
#include <polymod/PolymodConfig.h>
#endif
#ifndef INCLUDED_polymod_PolymodError
#include <polymod/PolymodError.h>
#endif
#ifndef INCLUDED_polymod_PolymodErrorType
#include <polymod/PolymodErrorType.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssets
#include <polymod/backends/PolymodAssets.h>
#endif
#ifndef INCLUDED_polymod_format_ParseRules
#include <polymod/format/ParseRules.h>
#endif
#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif
#ifndef INCLUDED_polymod_fs_SysFileSystem
#include <polymod/fs/SysFileSystem.h>
#endif
#ifndef INCLUDED_polymod_util_SemanticVersion
#include <polymod/util/SemanticVersion.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_148_init,"polymod.Polymod","init",0x00ecc620,"polymod.Polymod.init","polymod/Polymod.hx",148,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_297_getDefaultIgnoreList,"polymod.Polymod","getDefaultIgnoreList",0xc5278c4b,"polymod.Polymod.getDefaultIgnoreList","polymod/Polymod.hx",297,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_312_scan,"polymod.Polymod","scan",0x0780888d,"polymod.Polymod.scan","polymod/Polymod.hx",312,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_413_clearCache,"polymod.Polymod","clearCache",0x8ce21085,"polymod.Polymod.clearCache","polymod/Polymod.hx",413,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_419_error,"polymod.Polymod","error",0x8351eeb8,"polymod.Polymod.error","polymod/Polymod.hx",419,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_427_warning,"polymod.Polymod","warning",0x8e76994c,"polymod.Polymod.warning","polymod/Polymod.hx",427,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_435_notice,"polymod.Polymod","notice",0x44af4728,"polymod.Polymod.notice","polymod/Polymod.hx",435,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_442_debug,"polymod.Polymod","debug",0xe7477543,"polymod.Polymod.debug","polymod/Polymod.hx",442,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_457_listModFiles,"polymod.Polymod","listModFiles",0x718ff9e3,"polymod.Polymod.listModFiles","polymod/Polymod.hx",457,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_467_initModPack,"polymod.Polymod","initModPack",0x0bf5087b,"polymod.Polymod.initModPack","polymod/Polymod.hx",467,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_482_getModPack,"polymod.Polymod","getModPack",0xa5a25fd5,"polymod.Polymod.getModPack","polymod/Polymod.hx",482,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_136_boot,"polymod.Polymod","boot",0xfc4d0f42,"polymod.Polymod.boot","polymod/Polymod.hx",136,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_137_boot,"polymod.Polymod","boot",0xfc4d0f42,"polymod.Polymod.boot","polymod/Polymod.hx",137,0xd80c6d61)
namespace polymod{

void Polymod_obj::__construct() { }

Dynamic Polymod_obj::__CreateEmpty() { return new Polymod_obj; }

void *Polymod_obj::_hx_vtable = 0;

Dynamic Polymod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Polymod_obj > _hx_result = new Polymod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Polymod_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4937d120;
}

 ::Dynamic Polymod_obj::onError;

 ::polymod::backends::PolymodAssetLibrary Polymod_obj::library;

::Array< ::Dynamic> Polymod_obj::init( ::Dynamic params){
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_148_init)
HXLINE( 149)		::polymod::Polymod_obj::onError = params->__Field(HX_("errorCallback",ad,29,bf,d7),::hx::paccDynamic);
HXLINE( 151)		::String modRoot = ( (::String)(params->__Field(HX_("modRoot",04,ba,da,e0),::hx::paccDynamic)) );
HXLINE( 152)		::Array< ::String > dirs = ( (::Array< ::String >)(params->__Field(HX_("dirs",86,66,69,42),::hx::paccDynamic)) );
HXLINE( 153)		 ::polymod::util::SemanticVersion apiVersion = null();
HXLINE( 154)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 156)			::String apiStr = ( (::String)(params->__Field(HX_("apiVersion",9e,39,c9,e5),::hx::paccDynamic)) );
HXLINE( 157)			bool _hx_tmp;
HXDLIN( 157)			if (::hx::IsNotNull( apiStr )) {
HXLINE( 157)				_hx_tmp = (apiStr == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 157)				_hx_tmp = true;
            			}
HXDLIN( 157)			if (_hx_tmp) {
HXLINE( 159)				apiStr = HX_("*.*.*",a2,34,5c,4d);
            			}
HXLINE( 161)			apiVersion = ::polymod::util::SemanticVersion_obj::fromString(apiStr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 163)				{
HXLINE( 163)					null();
            				}
HXDLIN( 163)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 165)				::polymod::Polymod_obj::error(HX_("parse_api_version",e7,a5,59,ab),((HX_("Error parsing api version: (",d8,67,2c,ab) + ::Std_obj::string(msg)) + HX_(")",29,00,00,00)),HX_("init",10,3b,bb,45));
HXLINE( 166)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 169)		::Array< ::Dynamic> modMeta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 170)		::Array< ::Dynamic> modVers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 171)		::Dynamic fileSystem;
HXDLIN( 171)		if (::hx::IsNotNull( params->__Field(HX_("customFilesystem",7c,dd,ec,23),::hx::paccDynamic) )) {
HXLINE( 171)			fileSystem = ::Type_obj::createInstance(params->__Field(HX_("customFilesystem",7c,dd,ec,23),::hx::paccDynamic),::cpp::VirtualArray_obj::__new(0));
            		}
            		else {
HXLINE( 171)			fileSystem =  ::polymod::fs::SysFileSystem_obj::__alloc( HX_CTX ,( (::String)(params->__Field(HX_("modRoot",04,ba,da,e0),::hx::paccDynamic)) ));
            		}
HXLINE( 186)		if (::hx::IsNotNull( params->__Field(HX_("modVersions",3d,b3,b4,55),::hx::paccDynamic) )) {
HXLINE( 188)			int _g = 0;
HXDLIN( 188)			::Array< ::String > _g1 = ( (::Array< ::String >)(params->__Field(HX_("modVersions",3d,b3,b4,55),::hx::paccDynamic)) );
HXDLIN( 188)			while((_g < _g1->length)){
HXLINE( 188)				::String str = _g1->__get(_g);
HXDLIN( 188)				_g = (_g + 1);
HXLINE( 190)				 ::polymod::util::SemanticVersion semVer = null();
HXLINE( 191)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 193)					semVer = ::polymod::util::SemanticVersion_obj::fromString(str);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 195)						{
HXLINE( 195)							null();
            						}
HXDLIN( 195)						 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 196)						{
HXLINE( 197)							::polymod::Polymod_obj::error(HX_("param_mod_version",69,37,99,54),(HX_("There was an error with one of the mod version patterns you provided: ",a5,c6,14,8b) + ::Std_obj::string(msg)),HX_("init",10,3b,bb,45));
HXLINE( 198)							semVer = ::polymod::util::SemanticVersion_obj::fromString(HX_("*.*.*",a2,34,5c,4d));
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 200)				modVers->push(semVer);
            			}
            		}
HXLINE( 204)		{
HXLINE( 204)			int _g = 0;
HXDLIN( 204)			int _g1 = dirs->length;
HXDLIN( 204)			while((_g < _g1)){
HXLINE( 204)				_g = (_g + 1);
HXDLIN( 204)				int i = (_g - 1);
HXLINE( 206)				if (::hx::IsNotNull( dirs->__get(i) )) {
HXLINE( 208)					::String origDir = dirs->__get(i);
HXLINE( 209)					dirs[i] = ::polymod::util::Util_obj::pathJoin(modRoot,dirs->__get(i));
HXLINE( 210)					 ::polymod::ModMetadata meta = ::polymod::fs::IFileSystem_obj::getMetadata(fileSystem,dirs->__get(i));
HXLINE( 212)					if (::hx::IsNotNull( meta )) {
HXLINE( 214)						meta->id = origDir;
HXLINE( 215)						int apiScore = meta->apiVersion->checkCompatibility(apiVersion);
HXLINE( 216)						if (::hx::IsLess( apiScore,::polymod::PolymodConfig_obj::get_apiVersionMatch() )) {
HXLINE( 219)							::String _hx_tmp = ((((HX_("Mod \"",24,57,85,9f) + origDir) + HX_("\" was built for incompatible API version ",c7,84,bf,95)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 218)							::polymod::Polymod_obj::error(HX_("version_conflict_api",b4,79,7a,d1),(_hx_tmp + ( (::String)(params->__Field(HX_("apiVersion",9e,39,c9,e5),::hx::paccDynamic)) ).toString()),HX_("init",10,3b,bb,45));
            						}
            						else {
HXLINE( 229)							if ((apiVersion->major == 0)) {
HXLINE( 232)								if ((apiVersion->minor != meta->apiVersion->minor)) {
HXLINE( 235)									::String _hx_tmp = (((((HX_("Modding API is in pre-release, some things might have changed!\n",23,df,36,3a) + HX_("Mod \"",24,57,85,9f)) + origDir) + HX_("\" was built for API version ",5c,9c,7b,4e)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 234)									::polymod::Polymod_obj::warning(HX_("version_prerelease_api",26,70,a7,43),(_hx_tmp + apiVersion->toString()),HX_("init",10,3b,bb,45));
            								}
            							}
            						}
HXLINE( 246)						 ::polymod::util::SemanticVersion modVer;
HXDLIN( 246)						if ((modVers->length > i)) {
HXLINE( 246)							modVer = modVers->__get(i).StaticCast<  ::polymod::util::SemanticVersion >();
            						}
            						else {
HXLINE( 246)							modVer = null();
            						}
HXLINE( 247)						if (::hx::IsNotNull( modVer )) {
HXLINE( 249)							int score = modVer->checkCompatibility(meta->modVersion);
HXLINE( 250)							if ((score < 3)) {
HXLINE( 253)								::String _hx_tmp = ((HX_("Mod pack wants version ",0e,47,1b,3b) + modVer->toString()) + HX_(" of mod(",af,f2,b6,ab));
HXDLIN( 253)								::String _hx_tmp1 = ((_hx_tmp + meta->id) + HX_("), found incompatible version ",74,75,29,24));
HXLINE( 252)								::polymod::Polymod_obj::error(HX_("version_conflict_mod",dc,93,83,d1),((_hx_tmp1 + meta->modVersion->toString()) + HX_(" instead",62,18,ec,b3)),HX_("init",10,3b,bb,45));
            							}
            						}
HXLINE( 263)						modMeta->push(meta);
            					}
            				}
            			}
            		}
HXLINE( 268)		::polymod::Polymod_obj::library = ::polymod::backends::PolymodAssets_obj::init( ::Dynamic(::hx::Anon_obj::Create(8)
            			->setFixed(0,HX_("customBackend",63,24,96,a5), ::Dynamic(params->__Field(HX_("customBackend",63,24,96,a5),::hx::paccDynamic)))
            			->setFixed(1,HX_("fileSystem",8b,de,66,d3),fileSystem)
            			->setFixed(2,HX_("parseRules",c4,aa,37,1b), ::Dynamic(params->__Field(HX_("parseRules",c4,aa,37,1b),::hx::paccDynamic)))
            			->setFixed(3,HX_("extensionMap",5d,28,7a,23), ::Dynamic(params->__Field(HX_("extensionMap",5d,28,7a,23),::hx::paccDynamic)))
            			->setFixed(4,HX_("frameworkParams",64,76,eb,26), ::Dynamic(params->__Field(HX_("frameworkParams",64,76,eb,26),::hx::paccDynamic)))
            			->setFixed(5,HX_("dirs",86,66,69,42),dirs)
            			->setFixed(6,HX_("framework",7e,94,a4,51), ::Dynamic(params->__Field(HX_("framework",7e,94,a4,51),::hx::paccDynamic)))
            			->setFixed(7,HX_("ignoredFiles",05,36,92,57), ::Dynamic(params->__Field(HX_("ignoredFiles",05,36,92,57),::hx::paccDynamic)))));
HXLINE( 282)		if (::hx::IsNull( ::polymod::Polymod_obj::library )) {
HXLINE( 284)			return null();
            		}
HXLINE( 287)		if (::polymod::backends::PolymodAssets_obj::exists(::polymod::PolymodConfig_obj::get_modPackFile())) {
HXLINE( 289)			::polymod::Polymod_obj::initModPack(params);
            		}
HXLINE( 292)		return modMeta;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,init,return )

::Array< ::String > Polymod_obj::getDefaultIgnoreList(){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_297_getDefaultIgnoreList)
HXDLIN( 297)		::Array< ::String > _hx_tmp = ::polymod::PolymodConfig_obj::get_modIgnoreFiles();
HXLINE( 298)		::String _hx_tmp1 = ::polymod::PolymodConfig_obj::get_modMetadataFile();
HXLINE( 299)		::String _hx_tmp2 = ::polymod::PolymodConfig_obj::get_modPackFile();
HXLINE( 297)		return _hx_tmp->concat(::Array_obj< ::String >::__new(3)->init(0,_hx_tmp1)->init(1,_hx_tmp2)->init(2,::polymod::PolymodConfig_obj::get_modIconFile()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Polymod_obj,getDefaultIgnoreList,return )

::Array< ::Dynamic> Polymod_obj::scan(::String modRoot,::String __o_apiVersionStr, ::Dynamic errorCallback,::Dynamic fileSystem){
            		::String apiVersionStr = __o_apiVersionStr;
            		if (::hx::IsNull(__o_apiVersionStr)) apiVersionStr = HX_("*.*.*",a2,34,5c,4d);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_312_scan)
HXLINE( 313)		::polymod::Polymod_obj::onError = errorCallback;
HXLINE( 314)		 ::polymod::util::SemanticVersion apiVersion = null();
HXLINE( 315)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 317)			apiVersion = ::polymod::util::SemanticVersion_obj::fromString(apiVersionStr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 319)				{
HXLINE( 319)					null();
            				}
HXDLIN( 319)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 321)				::polymod::Polymod_obj::error(HX_("parse_api_version",e7,a5,59,ab),((HX_("Error parsing api version: (",d8,67,2c,ab) + ::Std_obj::string(msg)) + HX_(")",29,00,00,00)),HX_("scan",7d,fd,4e,4c));
HXLINE( 322)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 325)		if (::hx::IsNull( fileSystem )) {
HXLINE( 328)			fileSystem =  ::polymod::fs::SysFileSystem_obj::__alloc( HX_CTX ,modRoot);
            		}
HXLINE( 336)		::Array< ::Dynamic> modMeta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 338)		bool _hx_tmp;
HXDLIN( 338)		if (::polymod::fs::IFileSystem_obj::exists(fileSystem,modRoot)) {
HXLINE( 338)			_hx_tmp = !(::polymod::fs::IFileSystem_obj::isDirectory(fileSystem,modRoot));
            		}
            		else {
HXLINE( 338)			_hx_tmp = true;
            		}
HXDLIN( 338)		if (_hx_tmp) {
HXLINE( 340)			return modMeta;
            		}
HXLINE( 342)		::Array< ::String > dirs = ::polymod::fs::IFileSystem_obj::readDirectory(fileSystem,modRoot);
HXLINE( 343)		::polymod::Polymod_obj::debug((((HX_("scan found ",e1,2b,16,f4) + dirs->length) + HX_(" folders in ",e0,dc,95,8f)) + modRoot),::hx::SourceInfo(HX_("polymod/Polymod.hx",61,6d,0c,d8),343,HX_("polymod.Polymod",5e,af,2e,e4),HX_("scan",7d,fd,4e,4c)));
HXLINE( 346)		int l = dirs->length;
HXLINE( 347)		{
HXLINE( 347)			int _g = 0;
HXDLIN( 347)			int _g1 = l;
HXDLIN( 347)			while((_g < _g1)){
HXLINE( 347)				_g = (_g + 1);
HXDLIN( 347)				int i = (_g - 1);
HXLINE( 349)				int j = ((l - i) - 1);
HXLINE( 350)				::String dir = dirs->__get(j);
HXLINE( 351)				::String testDir = ((modRoot + HX_("/",2f,00,00,00)) + dir);
HXLINE( 352)				bool _hx_tmp;
HXDLIN( 352)				if (::polymod::fs::IFileSystem_obj::isDirectory(fileSystem,testDir)) {
HXLINE( 352)					_hx_tmp = !(::polymod::fs::IFileSystem_obj::exists(fileSystem,testDir));
            				}
            				else {
HXLINE( 352)					_hx_tmp = true;
            				}
HXDLIN( 352)				if (_hx_tmp) {
HXLINE( 354)					dirs->removeRange(j,1);
            				}
            			}
            		}
HXLINE( 358)		{
HXLINE( 358)			int _g2 = 0;
HXDLIN( 358)			int _g3 = dirs->length;
HXDLIN( 358)			while((_g2 < _g3)){
HXLINE( 358)				_g2 = (_g2 + 1);
HXDLIN( 358)				int i = (_g2 - 1);
HXLINE( 360)				if (::hx::IsNotNull( dirs->__get(i) )) {
HXLINE( 362)					::String origDir = dirs->__get(i);
HXLINE( 363)					dirs[i] = ((modRoot + HX_("/",2f,00,00,00)) + dirs->__get(i));
HXLINE( 364)					 ::polymod::ModMetadata meta = ::polymod::fs::IFileSystem_obj::getMetadata(fileSystem,dirs->__get(i));
HXLINE( 366)					if (::hx::IsNotNull( meta )) {
HXLINE( 368)						meta->id = origDir;
HXLINE( 369)						int apiScore = meta->apiVersion->checkCompatibility(apiVersion);
HXLINE( 370)						if (::hx::IsLess( apiScore,::polymod::PolymodConfig_obj::get_apiVersionMatch() )) {
HXLINE( 373)							::String _hx_tmp = ((((HX_("Mod \"",24,57,85,9f) + origDir) + HX_("\" was built for incompatible API version ",c7,84,bf,95)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 372)							::polymod::Polymod_obj::error(HX_("version_conflict_api",b4,79,7a,d1),(_hx_tmp + apiVersion->toString()),HX_("scan",7d,fd,4e,4c));
            						}
            						else {
HXLINE( 383)							if ((apiVersion->major == 0)) {
HXLINE( 386)								if ((apiVersion->minor != meta->apiVersion->minor)) {
HXLINE( 389)									::String _hx_tmp = (((((HX_("Modding API is in pre-release, some things might have changed!\n",23,df,36,3a) + HX_("Mod \"",24,57,85,9f)) + origDir) + HX_("\" was built for API version ",5c,9c,7b,4e)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 388)									::polymod::Polymod_obj::warning(HX_("version_prerelease_api",26,70,a7,43),(_hx_tmp + apiVersion->toString()),HX_("scan",7d,fd,4e,4c));
            								}
            							}
            						}
HXLINE( 400)						modMeta->push(meta);
            					}
            				}
            			}
            		}
HXLINE( 405)		return modMeta;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polymod_obj,scan,return )

void Polymod_obj::clearCache(){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_413_clearCache)
HXDLIN( 413)		if (::hx::IsNotNull( ::polymod::Polymod_obj::library )) {
HXLINE( 414)			::polymod::Polymod_obj::library->clearCache();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Polymod_obj,clearCache,(void))

void Polymod_obj::error(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_419_error)
HXDLIN( 419)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 421)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::ERROR_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,error,(void))

void Polymod_obj::warning(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_427_warning)
HXDLIN( 427)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 429)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::WARNING_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,warning,(void))

void Polymod_obj::notice(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_435_notice)
HXDLIN( 435)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 437)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::NOTICE_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,notice,(void))

void Polymod_obj::debug(::String message, ::Dynamic posInfo){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_442_debug)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polymod_obj,debug,(void))

::Array< ::String > Polymod_obj::listModFiles(::String type){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_457_listModFiles)
HXLINE( 458)		if (::hx::IsNotNull( ::polymod::Polymod_obj::library )) {
HXLINE( 460)			return ::polymod::Polymod_obj::library->listModFiles(type);
            		}
HXLINE( 462)		return ::Array_obj< ::String >::__new(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,listModFiles,return )

void Polymod_obj::initModPack( ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_467_initModPack)
HXLINE( 468)		::String polymodpack = ::polymod::backends::PolymodAssets_obj::getText(::polymod::PolymodConfig_obj::get_modPackFile());
HXLINE( 469)		if (::hx::IsNotNull( polymodpack )) {
HXLINE( 471)			 ::Dynamic data = ::polymod::Polymod_obj::getModPack(polymodpack);
HXLINE( 472)			::Array< ::String > mods = ( (::Array< ::String >)(data->__Field(HX_("mods",71,d3,60,48),::hx::paccDynamic)) );
HXLINE( 473)			::Array< ::String > vers = ( (::Array< ::String >)(data->__Field(HX_("versions",5b,4e,b8,d6),::hx::paccDynamic)) );
HXLINE( 475)			params->__SetField(HX_("dirs",86,66,69,42),mods,::hx::paccDynamic);
HXLINE( 476)			params->__SetField(HX_("modVersions",3d,b3,b4,55),vers,::hx::paccDynamic);
HXLINE( 477)			::polymod::Polymod_obj::init(params);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,initModPack,(void))

 ::Dynamic Polymod_obj::getModPack(::String text){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_482_getModPack)
HXLINE( 483)		if (::hx::IsNotNull( text )) {
HXLINE( 485)			::Array< ::String > mods = text.split(HX_(",",2c,00,00,00));
HXLINE( 486)			bool _hx_tmp;
HXDLIN( 486)			if (::hx::IsNotNull( mods )) {
HXLINE( 486)				_hx_tmp = (mods->length == 0);
            			}
            			else {
HXLINE( 486)				_hx_tmp = true;
            			}
HXDLIN( 486)			if (_hx_tmp) {
HXLINE( 488)				return null();
            			}
HXLINE( 490)			::Array< ::String > vers = ::Array_obj< ::String >::__new(0);
HXLINE( 491)			{
HXLINE( 491)				int _g = 0;
HXDLIN( 491)				int _g1 = mods->length;
HXDLIN( 491)				while((_g < _g1)){
HXLINE( 491)					_g = (_g + 1);
HXDLIN( 491)					int i = (_g - 1);
HXLINE( 493)					vers[i] = HX_("*.*.*",a2,34,5c,4d);
HXLINE( 494)					if ((mods->__get(i).indexOf(HX_(":",3a,00,00,00),null()) != -1)) {
HXLINE( 496)						::Array< ::String > arr = mods->__get(i).split(HX_(":",3a,00,00,00));
HXLINE( 497)						bool _hx_tmp;
HXDLIN( 497)						if (::hx::IsNotNull( arr )) {
HXLINE( 497)							_hx_tmp = (arr->length == 2);
            						}
            						else {
HXLINE( 497)							_hx_tmp = false;
            						}
HXDLIN( 497)						if (_hx_tmp) {
HXLINE( 499)							mods[i] = arr->__get(0);
HXLINE( 500)							vers[i] = arr->__get(1);
            						}
            					}
            				}
            			}
HXLINE( 504)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("versions",5b,4e,b8,d6),vers)
            				->setFixed(1,HX_("mods",71,d3,60,48),mods));
            		}
HXLINE( 506)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,getModPack,return )


Polymod_obj::Polymod_obj()
{
}

bool Polymod_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scan") ) { outValue = scan_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { outValue = notice_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { outValue = ( onError ); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { outValue = ( library ); return true; }
		if (HX_FIELD_EQ(inName,"warning") ) { outValue = warning_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { outValue = clearCache_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getModPack") ) { outValue = getModPack_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initModPack") ) { outValue = initModPack_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"listModFiles") ) { outValue = listModFiles_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getDefaultIgnoreList") ) { outValue = getDefaultIgnoreList_dyn(); return true; }
	}
	return false;
}

bool Polymod_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { library=ioValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Polymod_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Polymod_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Polymod_obj::onError,HX_("onError",29,6a,67,09)},
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(void *) &Polymod_obj::library,HX_("library",fb,26,70,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Polymod_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polymod_obj::onError,"onError");
	HX_MARK_MEMBER_NAME(Polymod_obj::library,"library");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Polymod_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polymod_obj::onError,"onError");
	HX_VISIT_MEMBER_NAME(Polymod_obj::library,"library");
};

#endif

::hx::Class Polymod_obj::__mClass;

static ::String Polymod_obj_sStaticFields[] = {
	HX_("onError",29,6a,67,09),
	HX_("library",fb,26,70,3f),
	HX_("init",10,3b,bb,45),
	HX_("getDefaultIgnoreList",3b,e1,b2,45),
	HX_("scan",7d,fd,4e,4c),
	HX_("clearCache",75,d9,1e,16),
	HX_("error",c8,cb,29,73),
	HX_("warning",5c,da,cb,09),
	HX_("notice",18,d8,b8,31),
	HX_("debug",53,52,1f,d7),
	HX_("listModFiles",d3,de,44,5a),
	HX_("initModPack",8b,11,e8,97),
	HX_("getModPack",c5,28,df,2e),
	::String(null())
};

void Polymod_obj::__register()
{
	Polymod_obj _hx_dummy;
	Polymod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.Polymod",5e,af,2e,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polymod_obj::__GetStatic;
	__mClass->mSetStaticField = &Polymod_obj::__SetStatic;
	__mClass->mMarkFunc = Polymod_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Polymod_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Polymod_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Polymod_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polymod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polymod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Polymod_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_136_boot)
HXDLIN( 136)		onError = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_137_boot)
HXDLIN( 137)		library = null();
            	}
}

} // end namespace polymod
