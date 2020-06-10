//
//  PageViewControllerIntro.swift
//  Museum
//
//  Created by Hugues on 2018/12/1.
//  Copyright © 2018 Hugues. All rights reserved.
//

import UIKit

class PageViewControllerIntro: UIPageViewController, UIPageViewControllerDelegate, UIPageViewControllerDataSource {
	
	lazy var orderedViewControllers: [UIViewController] = {
		return [self.newVc(viewController: "intro1"),
				self.newVc(viewController: "idMainViewController")]
	}()
	
	var pageControl = UIPageControl()
	
	override func viewDidLoad() {
		super.viewDidLoad()
		
		self.dataSource = self
		if let firstViewController = orderedViewControllers.first{
			setViewControllers([firstViewController],
							   direction: .forward,
							   animated: true,
							   completion: nil)
		}
		
		self.delegate = self
		configurePageControl()
		
	}
	
	func configurePageControl(){
		pageControl = UIPageControl(frame: CGRect(x: 0, y: UIScreen.main.bounds.maxY - 50, width: UIScreen.main.bounds.width, height: 50))
		pageControl.numberOfPages = orderedViewControllers.count
		pageControl.currentPage = 0
		pageControl.tintColor = UIColor.black
		
		print(self.view.frame.height)
		
		if self.view.frame.height > 800 {
			pageControl.pageIndicatorTintColor = UIColor(red: 0.90, green: 0.90, blue: 0.90, alpha: 1.0)
			pageControl.currentPageIndicatorTintColor = UIColor.black
		} else {
			pageControl.pageIndicatorTintColor = UIColor(red: 0.55, green: 0.91, blue: 0.91, alpha: 1.0)
			pageControl.currentPageIndicatorTintColor = UIColor.white
		}
		
		self.view.addSubview(pageControl)
	}
	
	func newVc(viewController: String) -> UIViewController{
		return UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: viewController)
	}
	
	func pageViewController(_ pageViewController: UIPageViewController, viewControllerBefore viewController: UIViewController) -> UIViewController? {
		
		guard let viewControllerIndex = orderedViewControllers.index(of: viewController) else {
			return nil
		}
		
		let previousIndex = viewControllerIndex - 1
		
		guard previousIndex >= 0 else {
			//return orderedViewControllers.last
			return nil
		}
		
		guard orderedViewControllers.count > previousIndex else {
			return nil
		}
		
		return orderedViewControllers[previousIndex]
		
	}
	
	func pageViewController(_ pageViewController: UIPageViewController, viewControllerAfter viewController: UIViewController) -> UIViewController? {
		
		guard let viewControllerIndex = orderedViewControllers.index(of: viewController) else {
			return nil
		}
		
		let nextIndex = viewControllerIndex + 1
		
		guard orderedViewControllers.count != nextIndex else {
			//return orderedViewControllers.first
			return nil
		}
		
		guard orderedViewControllers.count > nextIndex else {
			return nil
		}
		
		return orderedViewControllers[nextIndex]
	}
	
	func pageViewController(_ pageViewController: UIPageViewController, didFinishAnimating finished: Bool, previousViewControllers: [UIViewController], transitionCompleted completed: Bool) {
		
		let pageContentViewController = pageViewController.viewControllers![0]
		self.pageControl.currentPage = orderedViewControllers.index(of: pageContentViewController)!
	}
	
}

