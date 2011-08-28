@interface NameGenerator : NSObject
{

}

@property(nonatomic, retain) NSMutableArray *vowel;

@property(nonatomic, retain) NSMutableArray *malePre;
@property(nonatomic, retain) NSMutableArray *maleStart;
@property(nonatomic, retain) NSMutableArray *maleMiddle;
@property(nonatomic, retain) NSMutableArray *maleEnd;
@property(nonatomic, retain) NSMutableArray *malePost;

@property(nonatomic, retain) NSMutableArray *male;

@property(nonatomic, retain) NSMutableArray *femalePre;
@property(nonatomic, retain) NSMutableArray *femaleStart;
@property(nonatomic, retain) NSMutableArray *femaleMiddle;
@property(nonatomic, retain) NSMutableArray *femaleEnd;
@property(nonatomic, retain) NSMutableArray *femalePost;

@property(nonatomic, retain) NSMutableArray *female;

- (NSString *)getName;

- (NSString *)getName:(BOOL)generated male:(BOOL)sex prefix:(BOOL)prefix postfix:(BOOL)postfix;

@end
