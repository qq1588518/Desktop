//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MOBFString : NSObject
{
}

+ (long long)convertVersion:(id)arg1;
+ (id)dataByHexString:(id)arg1;
+ (id)parseURLParametersString:(id)arg1;
+ (_Bool)containsURLByString:(id)arg1;
+ (id)stringByBase64DecodeString:(id)arg1;
+ (id)dataByBase64DecodeString:(id)arg1;
+ (id)dataByHMACMd5String:(id)arg1 forKey:(id)arg2;
+ (id)dataByHMACSha1String:(id)arg1 forKey:(id)arg2;
+ (id)guidString;
+ (id)md5String:(id)arg1;
+ (id)sha1String:(id)arg1;
+ (id)urlDecodeString:(id)arg1 forEncoding:(unsigned long long)arg2;
+ (id)urlEncodeString:(id)arg1 forEncoding:(unsigned long long)arg2;

@end

