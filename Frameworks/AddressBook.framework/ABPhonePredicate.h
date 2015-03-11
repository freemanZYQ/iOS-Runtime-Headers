/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;

@interface ABPhonePredicate : ABPredicate {
    NSString *_country;
    NSString *_dbCountry;
    NSString *_phoneNumber;
}

@property(copy) NSString * country;
@property(readonly) NSString * dbCountry;
@property(copy) NSString * phoneNumber;

- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)country;
- (id)dbCountry;
- (void)dealloc;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context { }*)arg1 predicateContext:(void*)arg2 values:(struct Mem {}**)arg3 count:(int)arg4;
- (bool)hasCallback;
- (bool)isValid;
- (id)phoneNumber;
- (id)predicateFormat;
- (id)queryJoinsInCompound:(bool)arg1;
- (id)queryWhereString;
- (void)setCountry:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end