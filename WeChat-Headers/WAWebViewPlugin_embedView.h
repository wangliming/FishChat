//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

@class NSMutableDictionary;

@interface WAWebViewPlugin_embedView : WAWebViewPluginBase
{
    unsigned int _tagMax;
    NSMutableDictionary *_views;
}

- (void).cxx_destruct;
- (void)setViewFixed:(_Bool)arg1 viewId:(unsigned int)arg2;
- (unsigned int)getViewId:(id)arg1;
- (id)getChildViews;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)setViewVisible:(unsigned int)arg1 visible:(_Bool)arg2;
- (void)resizeView:(unsigned int)arg1 region:(struct CGRect)arg2;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2;

@end
