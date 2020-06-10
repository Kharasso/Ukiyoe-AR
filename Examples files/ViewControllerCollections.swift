//
//  ViewControllerCollections.swift
//  Museum
//
//  Created by Hugues on 2018/12/2.
//  Copyright © 2018 Hugues. All rights reserved.
//

import UIKit

class ViewControllerCollections: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout{
	
    
    @IBOutlet weak var buttonup: UIButton!
    
    @IBOutlet weak var buttondown: UIButton!
    
    @IBOutlet weak var collectionView: UICollectionView!

	@IBOutlet weak var text1: UILabel!
	
	@IBOutlet weak var text2: UILabel!
	
	let locationName = ["Ansel Adams in Our Time", "Graciela Iturbide's Mexico", "Radical Geometries"]
	
	let locationImage = [UIImage(named: "art1"), UIImage(named: "art2"), UIImage(named: "art3")]
	
	let locationDescription = ["December 13, 2018 - February 24, 2019", "January 19, 2019 - May 12, 2019", "February 9, 2019 - June 23, 2019"]
    
    let expandDescription = ["“Ansel Adams in Our Time” traces the iconic visual legacy of Ansel Adams (1902–1984), presenting some of his most celebrated prints, from a symphonic view of snow-dusted peaks in The Tetons and Snake River, Grand Teton National Park, Wyoming (1942) to an aerial shot of a knotted roadway in Freeway Interchange, Los Angeles (1967). The exhibition looks both backward and forward in time: his black-and-white photographs are displayed alongside prints by several of the 19th-century government survey photographers who greatly influenced Adams, as well as work by contemporary artists whose modern-day concerns centered on the environment, land rights, and the use and misuse of natural resources point directly to Adams’ legacy.","The photographs of Graciela Iturbide not only bear witness to Mexican society but express an intense personal and poetic lyricism about her native country. One of the most influential photographers active in Latin America today, Iturbide captures everyday life and its cultures, rituals, and religions, while also raising questions about paradoxes and social injustice in Mexican society. Her photographs tell a visual story of Mexico since the late 1970s—a country in constant transition, defined by the coexistence of the historical and modern as a result of the culture’s rich amalgamation of cultures.","The Bauhaus—Germany’s legendary school of art, architecture, and design—was founded in Weimar by architect Walter Gropius in the spring of 1919. Gropius assembled an international group of faculty members including Josef Albers (German), Lyonel Feininger (American), Wassily Kandinsky (Russian), Paul Klee (Swiss), and László Moholy-Nagy (Hungarian). ", "The beloved teddy bear at the center of Winnie-the-Pooh, first published in 1926 and translated into more than 50 languages, is one of the most famous children’s book characters of all time. This exhibition traces the history and universal appeal of the classic Winnie-the-Pooh stories written by A. A. Milne and illustrated by E. H. Shepard through nearly 200 works drawn primarily from the archives of the Victoria and Albert Museum.","Pastels are only rarely exhibited due to the fragility of the powdery pigment and the light sensitivity of the paper on which it rests. Drawn primarily from the MFA’s holdings, with select loans from a private collection, “French Pastels: Treasures from the Vault” provides an exceptional opportunity to see firsthand nearly 40 seldom-shown masterworks by artists including Mary Cassatt, Edgar Degas,  Edouard Manet,  Jean-François Millet, Claude Monet, Camille Pissarro, Odilon Redon, and  Pierre-Auguste Renoir." ]
    
    let titles = ["See Ansel Adams through a contemporary lens","A way of life, a way of seeing","Celebrate the centenary of this groundbreaking school of modernist abstraction", "Get ready for an adventure with your favorite bear","Exceptional display of rarely seen works by Millet, Degas, Monet, and more"]
    
    let othernames = ["Winnie-the-Pooh: Exploring a Classic","French Pastels Treasures from the Vault"]
    
    let otherdates = ["September 22, 2018 – January 6, 2019","June 30, 2018 – January 6, 2019"]
    
    let otherimages = [UIImage(named: "pooh"), UIImage(named: "pastels")]
    
    var passImage = UIImage()
    var passDescription = String()
    var passName = String()
    var passexpand = String()
    var passtitles = String()
    
	var indexArr = [Int]()
	
	let groupcount = 100
	
	override func viewDidLoad() {
		super.viewDidLoad()
        
		buttonup.layer.cornerRadius = 8
		buttondown.layer.cornerRadius = 8
		buttonup.layer.masksToBounds = true
		buttondown.layer.masksToBounds = true
        buttonup.titleLabel?.numberOfLines = 2
        buttondown.titleLabel?.numberOfLines = 2
		
		for _ in 0 ..< groupcount {
			for j in 0 ..< locationImage.count{
				indexArr.append(j)
			}
		}
		
		collectionView.scrollToItem(at: NSIndexPath.init(item: groupcount/2 * locationImage.count, section: 0) as IndexPath, at: UICollectionView.ScrollPosition.centeredHorizontally, animated: false)
		
		let iconwidth = CGFloat(48)
		
		let buttonback = UIButton()
		buttonback.translatesAutoresizingMaskIntoConstraints = false
		buttonback.layer.cornerRadius = 0.5 * buttonback.bounds.size.width
		buttonback.clipsToBounds = true
		buttonback.setImage(UIImage(named: "back_button" ), for: .normal)
		view.addSubview(buttonback)
		
		buttonback.addTarget(self, action: #selector(buttonbackWasTapped), for: .touchUpInside)
		
		buttonback.bottomAnchor.constraint(equalTo: view.bottomAnchor, constant: -36).isActive = true
		buttonback.heightAnchor.constraint(equalToConstant: iconwidth).isActive = true
		buttonback.widthAnchor.constraint(equalToConstant: iconwidth).isActive = true
		buttonback.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -36).isActive = true
		
		// Do any additional setup after loading the view.
	}
	
	@objc func buttonbackWasTapped(){
		_ = navigationController?.popViewController(animated: false)
	}
	
	
	
	
	func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumInteritemSpacingForSectionAt section: Int) -> CGFloat {
		return CGFloat(20)
	}
	
	func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
		return indexArr.count
	}
	
	func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
		let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "cell", for: indexPath) as! CollectionViewCell
		
		let index = indexArr[indexPath.row]
		cell.locationName.text = locationName[index]
		cell.locationImage.image = locationImage[index]
		cell.locationDescription.text = locationDescription[index]
		
		cell.contentView.layer.cornerRadius = 8
		cell.contentView.layer.masksToBounds = true
		
		return cell
	}
	
	
	
	func scrollViewDidEndDecelerating(_ scrollView: UIScrollView) {
		
		let pointInView = view.convert(collectionView.center, to:collectionView)
		let indexPathNow = collectionView.indexPathForItem(at: pointInView)
		let index = (indexPathNow?.row ?? 0) % locationImage.count
		
		collectionView.scrollToItem(at: NSIndexPath.init(item: groupcount/2 * locationImage.count + index, section: 0) as IndexPath, at: UICollectionView.ScrollPosition.centeredHorizontally, animated: false)
	}
    
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        
        var cell = collectionView.cellForItem(at: indexPath) as! CollectionViewCell
        
        let index = indexArr[indexPath.row]
        
        passImage = cell.locationImage.image!
        passName = cell.locationName.text!
        passDescription = cell.locationDescription.text!
        passtitles = titles[index]
        passexpand = expandDescription[index]
        
        performSegue(withIdentifier: "expand", sender: self)
    }
    
    
    @IBAction func uppertext(_ sender: Any) {
        passName = othernames[0]
        passDescription = otherdates[0]
        passImage = otherimages[0]!
        passtitles = titles[3]
        passexpand = expandDescription[3]
        
        performSegue(withIdentifier: "expand", sender: self)
    }
    
    
    @IBAction func lowertext(_ sender: Any) {
        passName = othernames[1]
        passDescription = otherdates[1]
        passImage = otherimages[1]!
        passtitles = titles[4]
        passexpand = expandDescription[4]
        
        performSegue(withIdentifier: "expand", sender: self)
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        var tocontroller = segue.destination as! ViewControllerExpand
        tocontroller.namestring = passName
        tocontroller.datestring = passDescription
        tocontroller.pictureimage = passImage
        tocontroller.titlestring = passtitles
        tocontroller.expandstring = passexpand
    }
	
	/*
	// MARK: - Navigation
	
	// In a storyboard-based application, you will often want to do a little preparation before navigation
	override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
	// Get the new view controller using segue.destination.
	// Pass the selected object to the new view controller.
	}
	*/
}



