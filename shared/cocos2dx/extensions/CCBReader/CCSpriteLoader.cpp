#include "CCSpriteLoader.h"

#define PROPERTY_FLIP "flip"
#define PROPERTY_DISPLAYFRAME "displayFrame"
#define PROPERTY_COLOR "color"
#define PROPERTY_OPACITY "opacity"
#define PROPERTY_BLENDFUNC "blendFunc"

NS_CC_EXT_BEGIN

void CCSpriteLoader::onHandlePropTypeSpriteFrame(CCNode * pNode, CCNode * pParent, CCString * pPropertyName, CCSpriteFrame * pCCSpriteFrame, CCBReader * pCCBReader) {
    if(pPropertyName->compare(PROPERTY_DISPLAYFRAME) == 0) {
        ((CCSprite *)pNode)->setDisplayFrame(pCCSpriteFrame);
    } else {
        CCNodeLoader::onHandlePropTypeSpriteFrame(pNode, pParent, pPropertyName, pCCSpriteFrame, pCCBReader);
    }
}

void CCSpriteLoader::onHandlePropTypeFlip(CCNode * pNode, CCNode * pParent, CCString * pPropertyName, bool * pFlip, CCBReader * pCCBReader) {
    if(pPropertyName->compare(PROPERTY_FLIP) == 0) {
        ((CCSprite *)pNode)->setFlipX(pFlip[0]);
        ((CCSprite *)pNode)->setFlipY(pFlip[1]);
    } else {
        CCNodeLoader::onHandlePropTypeFlip(pNode, pParent, pPropertyName, pFlip, pCCBReader);
    }
}

void CCSpriteLoader::onHandlePropTypeColor3(CCNode * pNode, CCNode * pParent, CCString * pPropertyName, ccColor3B pCCColor3B, CCBReader * pCCBReader) {
    if(pPropertyName->compare(PROPERTY_COLOR) == 0) {
        ((CCSprite *)pNode)->setColor(pCCColor3B);
    } else {
        CCNodeLoader::onHandlePropTypeColor3(pNode, pParent, pPropertyName, pCCColor3B, pCCBReader);
    }
}

void CCSpriteLoader::onHandlePropTypeByte(CCNode * pNode, CCNode * pParent, CCString * pPropertyName, unsigned char pByte, CCBReader * pCCBReader) {
    if(pPropertyName->compare(PROPERTY_OPACITY) == 0) {
        ((CCSprite *)pNode)->setOpacity(pByte);
    } else {
        CCNodeLoader::onHandlePropTypeByte(pNode, pParent, pPropertyName, pByte, pCCBReader);
    }
}

void CCSpriteLoader::onHandlePropTypeBlendFunc(CCNode * pNode, CCNode * pParent, CCString * pPropertyName, ccBlendFunc pCCBlendFunc, CCBReader * pCCBReader) {
    if(pPropertyName->compare(PROPERTY_BLENDFUNC) == 0) {
        ((CCSprite *)pNode)->setBlendFunc(pCCBlendFunc);
    } else {
        CCNodeLoader::onHandlePropTypeBlendFunc(pNode, pParent, pPropertyName, pCCBlendFunc, pCCBReader);
    }
}

NS_CC_EXT_END
