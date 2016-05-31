//
//  Created by Jesse Squires
//  http://www.jessesquires.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSQMessagesViewController
//
//
//  GitHub
//  https://github.com/jessesquires/JSQMessagesViewController
//
//
//  License
//  Copyright (c) 2014 Jesse Squires
//  Released under an MIT license: http://opensource.org/licenses/MIT
//


#import <UIKit/UIKit.h>

//! Project version number for JSQMessagesController.
FOUNDATION_EXPORT double JSQMessagesControllerVersionNumber;

//! Project version string for JSQMessagesController.
FOUNDATION_EXPORT const unsigned char JSQMessagesControllerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JSQMessagesViewController/PublicHeader.h>
#import <JSQMessagesController/JSQMessagesViewController.h>

//  Views
#import <JSQMessagesController/JSQMessagesCollectionView.h>
#import <JSQMessagesController/JSQMessagesCollectionViewCellIncoming.h>
#import <JSQMessagesController/JSQMessagesCollectionViewCellOutgoing.h>
#import <JSQMessagesController/JSQMessagesTypingIndicatorFooterView.h>
#import <JSQMessagesController/JSQMessagesLoadEarlierHeaderView.h>

//  Layout
#import <JSQMessagesController/JSQMessagesBubbleSizeCalculating.h>
#import <JSQMessagesController/JSQMessagesBubblesSizeCalculator.h>
#import <JSQMessagesController/JSQMessagesCollectionViewFlowLayout.h>
#import <JSQMessagesController/JSQMessagesCollectionViewLayoutAttributes.h>
#import <JSQMessagesController/JSQMessagesCollectionViewFlowLayoutInvalidationContext.h>
#import <JSQMessagesController/JSQAudioMediaViewAttributes.h>

//  Toolbar
#import <JSQMessagesController/JSQMessagesComposerTextView.h>
#import <JSQMessagesController/JSQMessagesInputToolbar.h>
#import <JSQMessagesController/JSQMessagesToolbarContentView.h>

//  Model
#import <JSQMessagesController/JSQMessage.h>

#import <JSQMessagesController/JSQMediaItem.h>
#import <JSQMessagesController/JSQAudioMediaItem.h>
#import <JSQMessagesController/JSQPhotoMediaItem.h>
#import <JSQMessagesController/JSQLocationMediaItem.h>
#import <JSQMessagesController/JSQVideoMediaItem.h>

#import <JSQMessagesController/JSQMessagesBubbleImage.h>
#import <JSQMessagesController/JSQMessagesAvatarImage.h>

#import <JSQMessagesController/JSQAudioMediaViewAttributes.h>

//  Protocols
#import <JSQMessagesController/JSQMessageData.h>
#import <JSQMessagesController/JSQMessageMediaData.h>
#import <JSQMessagesController/JSQMessageAvatarImageDataSource.h>
#import <JSQMessagesController/JSQMessageBubbleImageDataSource.h>
#import <JSQMessagesController/JSQMessagesCollectionViewDataSource.h>
#import <JSQMessagesController/JSQMessagesCollectionViewDelegateFlowLayout.h>

//  Factories
#import <JSQMessagesController/JSQMessagesAvatarImageFactory.h>
#import <JSQMessagesController/JSQMessagesBubbleImageFactory.h>
#import <JSQMessagesController/JSQMessagesMediaViewBubbleImageMasker.h>
#import <JSQMessagesController/JSQMessagesTimestampFormatter.h>
#import <JSQMessagesController/JSQMessagesToolbarButtonFactory.h>

//  Categories
#import <JSQMessagesController/JSQSystemSoundPlayer+JSQMessages.h>
#import <JSQMessagesController/NSString+JSQMessages.h>
#import <JSQMessagesController/UIColor+JSQMessages.h>
#import <JSQMessagesController/UIImage+JSQMessages.h>
#import <JSQMessagesController/UIView+JSQMessages.h>
#import <JSQMessagesController/NSBundle+JSQMessages.h>
