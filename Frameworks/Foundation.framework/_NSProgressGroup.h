/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableSet, NSProgress, _NSProgressFraction;

@interface _NSProgressGroup : NSObject {
    NSMutableSet *_children;
    _NSProgressFraction *_childrenFraction;
    unsigned long long _finishedChildrenCount;
    NSProgress *_parent;
    long long _portionOfParent;
    bool_closed;
}

- (id)_indentedDescription:(unsigned long long)arg1;
- (void)addChild:(id)arg1;
- (void)cancel;
- (void)close;
- (void)dealloc;
- (id)description;
- (id)initWithParent:(id)arg1 portion:(long long)arg2;
- (id)parent;
- (void)pause;
- (void)prioritize;
- (void)stopNotifications;
- (void)updateChildWithOldFraction:(id)arg1 newFraction:(id)arg2;

@end