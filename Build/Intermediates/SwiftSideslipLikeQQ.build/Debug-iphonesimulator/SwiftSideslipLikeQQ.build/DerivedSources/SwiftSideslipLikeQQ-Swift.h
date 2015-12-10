// Generated by Apple Swift version 2.1 (swiftlang-700.1.101.6 clang-700.1.76)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC19SwiftSideslipLikeQQ11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC19SwiftSideslipLikeQQ21BidHomeViewController")
@interface BidHomeViewController : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19SwiftSideslipLikeQQ22DateHomeViewController")
@interface DateHomeViewController : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIPanGestureRecognizer;
@class UIStoryboardSegue;

SWIFT_CLASS("_TtC19SwiftSideslipLikeQQ18HomeViewController")
@interface HomeViewController : UIViewController
@property (nonatomic, copy) NSString * __nonnull titleOfOtherPages;
@property (nonatomic, strong) IBOutlet UIPanGestureRecognizer * __null_unspecified panGesture;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(UIStoryboardSegue * __nonnull)segue sender:(id __nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class NSIndexPath;
@class UITableViewCell;
@class UIImageView;
@class NSLayoutConstraint;

SWIFT_CLASS("_TtC19SwiftSideslipLikeQQ18LeftViewController")
@interface LeftViewController : UIViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, readonly, copy) NSArray<NSString *> * __nonnull titlesDictionary;
@property (nonatomic, weak) IBOutlet UITableView * __null_unspecified settingTableView;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified avatarImageView;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * __null_unspecified heightLayoutConstraintOfSettingTableView;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)tableView:(UITableView * __nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (NSInteger)tableView:(UITableView * __nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (NSInteger)numberOfSectionsInTableView:(UITableView * __nonnull)tableView;
- (UITableViewCell * __nonnull)tableView:(UITableView * __nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITabBar;
@class UITabBarItem;

SWIFT_CLASS("_TtC19SwiftSideslipLikeQQ20MainTabBarController")
@interface MainTabBarController : UITabBarController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)tabBar:(UITabBar * __nonnull)tabBar didSelectItem:(UITabBarItem * __nonnull)item;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;

SWIFT_CLASS("_TtC19SwiftSideslipLikeQQ23OtherPageViewController")
@interface OtherPageViewController : UIViewController
@property (nonatomic, copy) NSString * __null_unspecified PageTitle;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified mainLabel;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)goBack;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19SwiftSideslipLikeQQ22SellHomeViewController")
@interface SellHomeViewController : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIColor (SWIFT_EXTENSION(SwiftSideslipLikeQQ))

/// Create non-autoreleased color with in the given hex string Alpha will be set as 1 by default
///
/// \param hexString 
///
/// \returns  color with the given hex string
- (nullable instancetype)initWithHexString:(NSString * __nonnull)hexString;

/// Create non-autoreleased color with in the given hex string and alpha
///
/// \param hexString 
///
/// \param alpha 
///
/// \returns  color with the given hex string and alpha
- (nullable instancetype)initWithHexString:(NSString * __nonnull)hexString alpha:(float)alpha;

/// Create non-autoreleased color with in the given hex value Alpha will be set as 1 by default
///
/// \param hex 
///
/// \returns  color with the given hex value
- (nullable instancetype)initWithHex:(NSInteger)hex;

/// Create non-autoreleased color with in the given hex value and alpha
///
/// \param hex 
///
/// \param alpha 
///
/// \returns  color with the given hex value and alpha
- (nullable instancetype)initWithHex:(NSInteger)hex alpha:(float)alpha;
@end

@class UITapGestureRecognizer;
@class UINavigationController;
@class UIView;

SWIFT_CLASS("_TtC19SwiftSideslipLikeQQ14ViewController")
@interface ViewController : UIViewController
@property (nonatomic, strong) MainTabBarController * __null_unspecified mainTabBarController;
@property (nonatomic, strong) UITapGestureRecognizer * __null_unspecified tapGesture;
@property (nonatomic, strong) UINavigationController * __null_unspecified homeNavigationController;
@property (nonatomic, strong) HomeViewController * __null_unspecified homeViewController;
@property (nonatomic, strong) LeftViewController * __null_unspecified leftViewController;
@property (nonatomic, strong) BidHomeViewController * __null_unspecified bidHomeViewController;
@property (nonatomic, strong) SellHomeViewController * __null_unspecified sellHomeViewController;
@property (nonatomic, strong) DateHomeViewController * __null_unspecified dateHomeViewController;
@property (nonatomic, strong) UIView * __null_unspecified mainView;
@property (nonatomic) CGFloat distance;
@property (nonatomic, readonly) CGFloat FullDistance;
@property (nonatomic, readonly) CGFloat Proportion;
@property (nonatomic) CGFloat proportionOfLeftView;
@property (nonatomic) CGFloat distanceOfLeftView;
@property (nonatomic, strong) UIView * __null_unspecified blackCover;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)pan:(UIPanGestureRecognizer * __nonnull)recongnizer;
- (void)showLeft;
- (void)showHome;
- (void)showRight;
- (void)doTheAnimate:(CGFloat)proportion showWhat:(NSString * __nonnull)showWhat;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop