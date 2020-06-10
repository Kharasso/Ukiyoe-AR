//
//  mainAppController.mm




#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"
#import "VuforiaRenderDelegate.h"
#import "MainViewController.h"



// Unity native rendering callback plugin mechanism is only supported
// from version 4.5 onwards
#if UNITY_VERSION>434
// Exported methods for native rendering callback
extern "C" void UnitySetGraphicsDevice(void* device, int deviceType, int eventType);
extern "C" void UnityRenderEvent(int marker);



extern "C" void VuforiaSetGraphicsDevice(void* device, int deviceType, int eventType);
extern "C" void VuforiaRenderEvent(int marker);

#endif

@interface mainAppController : UnityAppController<UIApplicationDelegate>


@property (nonatomic, strong) UINavigationController *navigationController;

- (void)willStartWithViewController:(UIViewController*)controller;
- (void)shouldAttachRenderDelegate;

@end



@implementation mainAppController


- (void)shouldAttachRenderDelegate
{
    
    self.renderDelegate = [[VuforiaRenderDelegate alloc] init];

#if UNITY_VERSION>434
    //

    //
    //UnityRegisterRenderingPlugin(&UnitySetGraphicsDevice, &UnityRenderEvent);
    UnityRegisterRenderingPlugin(&VuforiaSetGraphicsDevice, &VuforiaRenderEvent);
#endif
    
}


- (void)willStartWithViewController:(UIViewController*)controller {

    //
    
    UIStoryboard *storyBoard;
    storyBoard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];

    _rootController         = [[UnityDefaultViewController alloc] init];
    _rootView               = [[UIView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _rootController.view    = _rootView;
    
    MainViewController *mainVC       = [storyBoard instantiateViewControllerWithIdentifier:@"idPageViewControllerIntro"];
    
    self.navigationController = [[UINavigationController alloc] initWithRootViewController:mainVC];
    
    [self.navigationController setNavigationBarHidden:YES animated:YES];
    
    [_rootView addSubview:self.navigationController.view];
}

@end


//
//
IMPL_APP_CONTROLLER_SUBCLASS(mainAppController)
