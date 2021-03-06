//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@interface DVTKnownStringMapping : NSObject <NSCopying>
{
    CDUnknownFunctionPointerType _strToIdxFunc;
    CDUnknownFunctionPointerType _idxToStrFunc;
}

+ (id)mappingWithKnownStringToIndexFunction:(CDUnknownFunctionPointerType)arg1 indexToKnownStringFunction:(CDUnknownFunctionPointerType)arg2;
- (CDUnknownFunctionPointerType)indexToStringFunction;
- (CDUnknownFunctionPointerType)stringToIndexFunction;
- (unsigned long long)numberOfKnownStrings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKnownStringToIndexFunction:(CDUnknownFunctionPointerType)arg1 indexToKnownStringFunction:(CDUnknownFunctionPointerType)arg2;

@end

