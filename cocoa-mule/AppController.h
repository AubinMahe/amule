#import <Cocoa/Cocoa.h>

#import "EC.h"
#import "amuleData.h"

@interface AppController : NSObject {
    IBOutlet id m_main_tabview;

	ECRemoteConnection *m_connection;
	amuleData *m_data;
	
	int m_daemon_pid;
}
- (IBAction)show_Networks:(id)sender;
- (IBAction)show_Search:(id)sender;
- (IBAction)show_Sharing:(id)sender;
- (IBAction)show_Stats:(id)sender;
- (IBAction)show_Xfers:(id)sender;
- (IBAction)show_Preferences:(id)sender;
- (IBAction)show_About:(id)sender;

- (int)startDaemon;

@end