// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_ModchartState
#include <ModchartState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PauseSubState
#include <PauseSubState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_17d383cbce329512_21_new,"PauseSubState","new",0x00d575d9,"PauseSubState.new","PauseSubState.hx",21,0x953dc7b7)
static const ::String _hx_array_data_08e59567_2[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("FUCKFUCKFUCK",a5,b3,50,7e),HX_("Exit to menu",82,87,9a,a9),
};
static const ::String _hx_array_data_08e59567_3[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_102_update,"PauseSubState","update",0x6d53d230,"PauseSubState.update","PauseSubState.hx",102,0x953dc7b7)
static const ::String _hx_array_data_08e59567_8[] = {
	HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
static const ::String _hx_array_data_08e59567_9[] = {
	HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_233_destroy,"PauseSubState","destroy",0xc2ba82f3,"PauseSubState.destroy","PauseSubState.hx",233,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_240_changeSelection,"PauseSubState","changeSelection",0x8f960fb5,"PauseSubState.changeSelection","PauseSubState.hx",240,0x953dc7b7)

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_21_new)
HXLINE(  33)		this->includeSkip = false;
HXLINE(  31)		this->offsetChanged = false;
HXLINE(  26)		this->curSelected = 0;
HXLINE(  25)		this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_2,4);
HXLINE(  37)		super::__construct();
HXLINE(  40)		this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_3,3);
HXLINE(  43)		 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  43)		::String library = null();
HXDLIN(  43)		this->pauseMusic = _hx_tmp->loadEmbedded(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),true,true,null());
HXLINE(  44)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  45)		 ::flixel::_hx_system::FlxSound _hx_tmp1 = this->pauseMusic;
HXDLIN(  45)		 ::flixel::math::FlxRandom _hx_tmp2 = ::flixel::FlxG_obj::random;
HXDLIN(  45)		_hx_tmp1->play(false,_hx_tmp2->_hx_int(0,::Std_obj::_hx_int((this->pauseMusic->_length / ( (Float)(2) ))),null()),null());
HXLINE(  47)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE(  49)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  50)		bg->set_alpha(( (Float)(0) ));
HXLINE(  51)		bg->scrollFactor->set(null(),null());
HXLINE(  52)		this->add(bg);
HXLINE(  54)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,HX_("",00,00,00,00),32,null());
HXLINE(  55)		{
HXLINE(  55)			 ::flixel::text::FlxText _g = levelInfo;
HXDLIN(  55)			_g->set_text(( (::String)((_g->text + ::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic))) ));
            		}
HXLINE(  56)		levelInfo->scrollFactor->set(null(),null());
HXLINE(  57)		levelInfo->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  58)		levelInfo->updateHitbox();
HXLINE(  59)		this->add(levelInfo);
HXLINE(  61)		 ::flixel::text::FlxText levelDifficulty =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,HX_("",00,00,00,00),32,null());
HXLINE(  62)		{
HXLINE(  62)			 ::flixel::text::FlxText _g1 = levelDifficulty;
HXDLIN(  62)			::String _g2 = _g1->text;
HXDLIN(  62)			_g1->set_text((_g2 + ::CoolUtil_obj::difficultyString()));
            		}
HXLINE(  63)		levelDifficulty->scrollFactor->set(null(),null());
HXLINE(  64)		levelDifficulty->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  65)		levelDifficulty->updateHitbox();
HXLINE(  66)		this->add(levelDifficulty);
HXLINE(  68)		levelDifficulty->set_alpha(( (Float)(0) ));
HXLINE(  69)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE(  71)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN(  71)		levelInfo->set_x((( (Float)(_hx_tmp3) ) - (levelInfo->get_width() + 20)));
HXLINE(  72)		int _hx_tmp4 = ::flixel::FlxG_obj::width;
HXDLIN(  72)		levelDifficulty->set_x((( (Float)(_hx_tmp4) ) - (levelDifficulty->get_width() + 20)));
HXLINE(  74)		::flixel::tweens::FlxTween_obj::tween(bg, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  75)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  76)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  78)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  79)		this->add(this->grpMenuShit);
HXLINE(  80)		this->perSongOffset =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,(::flixel::FlxG_obj::height - 18),0,(((HX_("Additive Offset (Left, Right): ",5d,60,ef,2e) + ::PlayState_obj::songOffset) + HX_(" - Description - ",ca,32,1d,cd)) + HX_("Adds value to global offset, per song.",5a,ef,29,77)),12,null());
HXLINE(  81)		this->perSongOffset->scrollFactor->set(null(),null());
HXLINE(  82)		this->perSongOffset->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  85)		this->add(this->perSongOffset);
HXLINE(  88)		{
HXLINE(  88)			int _g3 = 0;
HXDLIN(  88)			int _g4 = this->menuItems->length;
HXDLIN(  88)			while((_g3 < _g4)){
HXLINE(  88)				_g3 = (_g3 + 1);
HXDLIN(  88)				int i = (_g3 - 1);
HXLINE(  90)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false);
HXLINE(  91)				songText->isMenuItem = true;
HXLINE(  92)				songText->targetY = ( (Float)(i) );
HXLINE(  93)				this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  96)		this->changeSelection(null());
HXLINE(  98)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x519cdafb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x519cdafb;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void PauseSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_102_update)
HXLINE( 103)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE( 104)			 ::flixel::_hx_system::FlxSound _g = this->pauseMusic;
HXDLIN( 104)			_g->set_volume((_g->_volume + (((Float)0.01) * elapsed)));
            		}
HXLINE( 106)		this->super::update(elapsed);
HXLINE( 108)		bool upP = ::PlayerSettings_obj::player1->controls->_upP->check();
HXLINE( 109)		bool downP = ::PlayerSettings_obj::player1->controls->_downP->check();
HXLINE( 110)		bool leftP = ::PlayerSettings_obj::player1->controls->_leftP->check();
HXLINE( 111)		bool rightP = ::PlayerSettings_obj::player1->controls->_rightP->check();
HXLINE( 112)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 113)		Float oldOffset = ( (Float)(0) );
HXLINE( 114)		::String songPath = ((HX_("assets/data/",f9,10,73,a0) + ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase()) + HX_("/",2f,00,00,00));
HXLINE( 116)		if (upP) {
HXLINE( 118)			this->changeSelection(-1);
            		}
            		else {
HXLINE( 120)			if (downP) {
HXLINE( 122)				this->changeSelection(1);
            			}
            			else {
HXLINE( 126)				if (leftP) {
HXLINE( 128)					oldOffset = ::PlayState_obj::songOffset;
HXLINE( 129)					 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PlayState >();
HXDLIN( 129)					::PlayState_obj::songOffset = (::PlayState_obj::songOffset - ( (Float)(1) ));
HXLINE( 130)					::sys::FileSystem_obj::rename(((songPath + oldOffset) + HX_(".offset",41,ee,1a,d9)),((songPath + ::PlayState_obj::songOffset) + HX_(".offset",41,ee,1a,d9)));
HXLINE( 131)					this->perSongOffset->set_text((((HX_("Additive Offset (Left, Right): ",5d,60,ef,2e) + ::PlayState_obj::songOffset) + HX_(" - Description - ",ca,32,1d,cd)) + HX_("Adds value to global offset, per song.",5a,ef,29,77)));
HXLINE( 134)					if (!(this->offsetChanged)) {
HXLINE( 136)						this->grpMenuShit->clear();
HXLINE( 138)						this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_8,2);
HXLINE( 140)						{
HXLINE( 140)							int _g = 0;
HXDLIN( 140)							int _g1 = this->menuItems->length;
HXDLIN( 140)							while((_g < _g1)){
HXLINE( 140)								_g = (_g + 1);
HXDLIN( 140)								int i = (_g - 1);
HXLINE( 142)								 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false);
HXLINE( 143)								songText->isMenuItem = true;
HXLINE( 144)								songText->targetY = ( (Float)(i) );
HXLINE( 145)								this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            							}
            						}
HXLINE( 148)						this->changeSelection(null());
HXLINE( 150)						this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 151)						this->offsetChanged = true;
            					}
            				}
            				else {
HXLINE( 153)					if (rightP) {
HXLINE( 155)						oldOffset = ::PlayState_obj::songOffset;
HXLINE( 156)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PlayState >();
HXDLIN( 156)						::PlayState_obj::songOffset = (::PlayState_obj::songOffset + 1);
HXLINE( 157)						::sys::FileSystem_obj::rename(((songPath + oldOffset) + HX_(".offset",41,ee,1a,d9)),((songPath + ::PlayState_obj::songOffset) + HX_(".offset",41,ee,1a,d9)));
HXLINE( 158)						this->perSongOffset->set_text((((HX_("Additive Offset (Left, Right): ",5d,60,ef,2e) + ::PlayState_obj::songOffset) + HX_(" - Description - ",ca,32,1d,cd)) + HX_("Adds value to global offset, per song.",5a,ef,29,77)));
HXLINE( 159)						if (!(this->offsetChanged)) {
HXLINE( 161)							this->grpMenuShit->clear();
HXLINE( 163)							this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_9,2);
HXLINE( 165)							{
HXLINE( 165)								int _g = 0;
HXDLIN( 165)								int _g1 = this->menuItems->length;
HXDLIN( 165)								while((_g < _g1)){
HXLINE( 165)									_g = (_g + 1);
HXDLIN( 165)									int i = (_g - 1);
HXLINE( 167)									 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false);
HXLINE( 168)									songText->isMenuItem = true;
HXLINE( 169)									songText->targetY = ( (Float)(i) );
HXLINE( 170)									this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            								}
            							}
HXLINE( 173)							this->changeSelection(null());
HXLINE( 175)							this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 176)							this->offsetChanged = true;
            						}
            					}
            				}
            			}
            		}
HXLINE( 181)		if (accepted) {
HXLINE( 183)			::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 185)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("Exit to menu",82,87,9a,a9)) ){
HXLINE( 211)				::PlayState_obj::loadRep = false;
HXLINE( 213)				if (::hx::IsNotNull( ::PlayState_obj::luaModchart )) {
HXLINE( 215)					::PlayState_obj::luaModchart->die();
HXLINE( 216)					::PlayState_obj::luaModchart = null();
            				}
HXLINE( 219)				if (::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),290 )) {
HXLINE( 220)					::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(290) ));
            				}
HXLINE( 221)				{
HXLINE( 221)					 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 221)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 221)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE( 210)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("FUCKFUCKFUCK",a5,b3,50,7e)) ){
HXLINE( 192)				::String difficulty = HX_("",00,00,00,00);
HXLINE( 194)				if ((::PlayState_obj::storyDifficulty == 0)) {
HXLINE( 195)					difficulty = HX_("-easy",af,a6,14,2c);
            				}
HXLINE( 197)				if ((::PlayState_obj::storyDifficulty == 2)) {
HXLINE( 198)					difficulty = HX_("-hard",98,49,10,2e);
            				}
HXLINE( 200)				::PlayState_obj::storyPlaylist->remove(::PlayState_obj::storyPlaylist->__get(0));
HXLINE( 202)				::haxe::Log_obj::trace(HX_("LOADING NEXT SONG",5e,07,d0,ca),::hx::SourceInfo(HX_("source/PauseSubState.hx",ab,fe,66,56),202,HX_("PauseSubState",67,95,e5,08),HX_("update",09,86,05,87)));
HXLINE( 203)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 203)				::String _hx_tmp1 = (::PlayState_obj::storyPlaylist->__get(0).toLowerCase() + difficulty);
HXDLIN( 203)				_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/PauseSubState.hx",ab,fe,66,56),203,HX_("PauseSubState",67,95,e5,08),HX_("update",09,86,05,87)));
HXLINE( 205)				::String _hx_tmp2 = (::PlayState_obj::storyPlaylist->__get(0).toLowerCase() + difficulty);
HXDLIN( 205)				::PlayState_obj::SONG = ::Song_obj::loadFromJson(_hx_tmp2,::PlayState_obj::storyPlaylist->__get(0));
HXLINE( 206)				{
HXLINE( 206)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 206)					_this->cleanup(_this->autoDestroy,true);
            				}
HXLINE( 207)				::PlayState_obj::weekSong++;
HXLINE( 209)				{
HXLINE( 209)					 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 209)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 209)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE( 191)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Restart Song",06,b6,fe,13)) ){
HXLINE( 190)				 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 190)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 190)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
HXDLIN( 190)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Resume",cd,dd,18,3d)) ){
HXLINE( 188)				this->close();
HXDLIN( 188)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
            		}
HXLINE( 225)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 225)		bool _hx_tmp = _this->keyManager->checkStatus(74,_this->status);
            	}


void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_233_destroy)
HXLINE( 234)		this->pauseMusic->destroy();
HXLINE( 236)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_240_changeSelection)
HXLINE( 241)		 ::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 241)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 243)		if ((this->curSelected < 0)) {
HXLINE( 244)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 245)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 246)			this->curSelected = 0;
            		}
HXLINE( 248)		int bullShit = 0;
HXLINE( 250)		{
HXLINE( 250)			int _g = 0;
HXDLIN( 250)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 250)			while((_g < _g1->length)){
HXLINE( 250)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 250)				_g = (_g + 1);
HXLINE( 252)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 253)				bullShit = (bullShit + 1);
HXLINE( 255)				item->set_alpha(((Float)0.6));
HXLINE( 258)				if ((item->targetY == 0)) {
HXLINE( 260)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(perSongOffset,"perSongOffset");
	HX_MARK_MEMBER_NAME(offsetChanged,"offsetChanged");
	HX_MARK_MEMBER_NAME(includeSkip,"includeSkip");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(perSongOffset,"perSongOffset");
	HX_VISIT_MEMBER_NAME(offsetChanged,"offsetChanged");
	HX_VISIT_MEMBER_NAME(includeSkip,"includeSkip");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"includeSkip") ) { return ::hx::Val( includeSkip ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perSongOffset") ) { return ::hx::Val( perSongOffset ); }
		if (HX_FIELD_EQ(inName,"offsetChanged") ) { return ::hx::Val( offsetChanged ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"includeSkip") ) { includeSkip=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perSongOffset") ) { perSongOffset=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetChanged") ) { offsetChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("perSongOffset",85,2c,3e,8a));
	outFields->push(HX_("offsetChanged",a1,a9,06,e9));
	outFields->push(HX_("includeSkip",c7,74,83,8b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,perSongOffset),HX_("perSongOffset",85,2c,3e,8a)},
	{::hx::fsBool,(int)offsetof(PauseSubState_obj,offsetChanged),HX_("offsetChanged",a1,a9,06,e9)},
	{::hx::fsBool,(int)offsetof(PauseSubState_obj,includeSkip),HX_("includeSkip",c7,74,83,8b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PauseSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("perSongOffset",85,2c,3e,8a),
	HX_("offsetChanged",a1,a9,06,e9),
	HX_("includeSkip",c7,74,83,8b),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class PauseSubState_obj::__mClass;

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PauseSubState",67,95,e5,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

