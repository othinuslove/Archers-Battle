#ifndef _HELP_H_
#define _HELP_H_
#include "cocos2d.h"

class HelpScene : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	// a selector callback
	void menuHellowWorldScene(cocos2d::Ref* pSender);

	void ScenePrinter();

	void Func(cocos2d::Ref* pSender);
	// implement the "static create()" method manually
	CREATE_FUNC(HelpScene);
};

#endif HELP