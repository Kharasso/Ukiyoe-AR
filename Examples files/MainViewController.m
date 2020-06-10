//
//  MainViewController.m
//
//


#import "MainViewController.h"
#import "ARViewController.h"

@interface MainViewController ()

@end

@implementation MainViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
      
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
    
    [self.navigationController setNavigationBarHidden:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



#pragma mark - Navigation


-(void)touchToLoad:(id)sender
{
    //
    
    UIStoryboard *storyBoard;
    storyBoard                      = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    ARViewController *mainVC        = [storyBoard instantiateViewControllerWithIdentifier:@"idARViewController"];
    [self.navigationController pushViewController:mainVC animated:false];
}

@end
