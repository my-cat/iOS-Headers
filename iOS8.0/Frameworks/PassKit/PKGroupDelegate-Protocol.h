//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKGroup, PKPass;

@protocol PKGroupDelegate <NSObject>
- (void)group:(PKGroup *)arg1 didMovePassFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)group:(PKGroup *)arg1 didRemovePass:(PKPass *)arg2 atIndex:(unsigned int)arg3;
- (void)group:(PKGroup *)arg1 didUpdatePass:(PKPass *)arg2 atIndex:(unsigned int)arg3;
- (void)group:(PKGroup *)arg1 didInsertPass:(PKPass *)arg2 atIndex:(unsigned int)arg3;
@end

