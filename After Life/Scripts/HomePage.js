function goToPlay(){
	router.push("play");
}

function goToUpload(){
	router.push("upload");
}

function goToManage(){
	router.push("manage");
}

module.exports = {
	goToPlay: goToPlay,
	goToUpload: goToUpload,
	goToManage: goToManage
};