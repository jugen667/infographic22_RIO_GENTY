import os
from simple_image_download import simple_image_download as simp

def main() :
	response = simp.simple_image_download
	lst = ["Dog", "Cat", "Giant aye-aye"]

	for rep in lst :
	    response().download(rep, 3)
	    print(rep.replace(' ', '_'))
	    try :
		    os.remove("simple_images/" + rep.replace(' ', '_') + "/" + rep + "_1.png")
		    os.remove("simple_images/" + rep.replace(' ', '_') + "/" + rep + "_2.png")
		    os.rename("simple_images/" + rep.replace(' ', '_') + "/" + os.listdir("simple_images/" + rep.replace(' ', '_') + "/")[0], "simple_images/" + rep.replace(' ', '_') + "/" + rep.replace(' ', '_') + "." + os.listdir("simple_images/" + rep.replace(' ', '_') + "/")[0].split('.')[1])
	    except FileExistsError as e :
	    	   	print(e)

if __name__ == "__main__" :
	main()