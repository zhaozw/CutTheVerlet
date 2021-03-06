//
//  HelloWorldLayer.h
//  CutTheVerlet
//
//  Created by Gustavo Ambrozio on 2/6/12.
//  Copyright OpenTheJob 2012. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Box2D.h"
#import "GLES-Render.h"
#import "MyContactListener.h"

//Pixel to metres ratio. Box2D uses metres as the unit for measurement.
//This ratio defines how many pixels correspond to 1 Box2D "metre"
//Box2D is optimized for objects of 1x1 metre therefore it makes sense
//to define the ratio so that your most common object type is 1x1 metre.
#define PTM_RATIO 32

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
	b2World* world;					// strong ref
	GLESDebugDraw *m_debugDraw;		// strong ref

    CCSprite *croc_;            // weak ref

    NSMutableArray *ropes;
    NSMutableArray *candies;
    b2Body* groundBody;    // weak ref
    CCSpriteBatchNode *ropeSpriteSheet; // weak ref

    b2Body *crocMouth_;          // weak ref
    b2Fixture *crocMouthBottom_;    // weak ref

    BOOL crocMouthOpened;
    NSTimer *crocAttitudeTimer;

    MyContactListener *contactListener;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
