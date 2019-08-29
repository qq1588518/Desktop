//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/FoObjectSELObserverItem-Protocol.h>

@class NSString;

@interface FoObjectSELObserverItem : NSObject <FoObjectSELObserverItem>
{
    id _block;
    id _obj;
    SEL _sel;
    NSString *_kvoKeyPath;
    void *_objObservationInfo;
    Class _aClass;
}

@property(nonatomic) Class aClass; // @synthesize aClass=_aClass;
@property void *objObservationInfo; // @synthesize objObservationInfo=_objObservationInfo;
@property(copy, nonatomic) NSString *kvoKeyPath; // @synthesize kvoKeyPath=_kvoKeyPath;
@property(nonatomic) SEL sel; // @synthesize sel=_sel;
@property(nonatomic) id obj; // @synthesize obj=_obj;
@property(retain, nonatomic) id block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)dealloc;
- (void)objectRemoveKVO;
- (void)remove;
- (id)initWithObj:(id)arg1 sel:(SEL)arg2 template:(void *)arg3 type:(unsigned long long)arg4 callbackBlock:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

