#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    modelList << "keyword是一种怎样的体验?"
              << "关于keyword你可能还不知道！"
              << "keyword以后，引发了我们哪些思考?"
              << "中国最厉害的20个keyword方法，知道一个算你牛?"
              << "自从知道keyword，再也不发愁了！"
              << "史上最全的keyword方法，你知道几个？"
              << "不会keyword？用这些方法让你分分成为达人!"
              << "为什么你不会keyword？这就是原因！"
              << "如何在最短的时间掌握keyword?"
              << "keyword 你知道几个？"
              << "这些都学会了，想不会keyword都难!"
              << "万万没想到,keyword居然有这么多好处！"
              << "这才是keyword最正确的姿势，赶快试试吧！"
              << "为什么这么多人都不愿意keyword了？"
              << "最新keyword指南"
              << "为了keyword,我拼了"
              << "别让这样的keyword方式毁掉你！"
              << "原来你还不知道,keyword是这样的！"
              << "手把手教你keyword"
              << "这篇文章一定要含着泪读完，和你的keyword有关"
              << "每天还在这样keyword，小心哦"
              << "一次意外的keyword，却让我终身难忘"
              << "能让你提升十倍,keyword的人都应看看看"
              << "不要找我了，我要去keyword了"
              << "他为了keyword，竟然......"
              << "竟然可以这样keyword,一般人不好意思看"
              << "10句话告诉你，什么才是真正的keyword"
              << "100种keyword的方法，你知道几种？"
              << "都在keyword,为何差别这么大?"
              << "看完这些，瞬间不想keyword了"
              << "他在keyword,刷爆了朋友圈"
              << "这样keyword，好多老司机不知道"
              << "同样是keyword，为什么你的差别和别人这么大"
              << "其实，你比想象中更会keyword"
              << "别再每天这样keyword了"
              << "这样keyword的人，你值得深交"
              << "这样keyword，从菜鸟变到大神"
              << "看懂了这些，你再决定以后怎么keyword吧"
              << "他keyword失败了，他的这些习惯你都有"
              << "keyword，千万别不当回事"
              << "他没那么喜欢keyword,只是习惯了"
              << "关于keyword的十句话，你都读懂就不简单了"
              << "keyword！他是这样做的"
              << "最常用的keyword方式，赶快收藏"
              << "他经常这样keyword，让人心疼"
              << "这才是keyword，最正确的打开方式，超美够全!"
              << "吓人！keyword 千万别这样做"
              << "最常见的keyword方式，我居然现在才知道"
              << "keyword的禁忌，一定不能越雷池一步！赶紧收藏"
              << "这样keyword，你就毁了，赶紧收藏为时不晚"
              << "仅需10分钟，让你轻松学会keyword"
              << "想学keyword，你先满足这些条件吧"
              << "他是keyword的一把好手，一件事情后竟然......"
              << "他竟然放弃了keyword"
              << "一直讨厌keyword的他，却因这件事喜欢上了keyword"
              << "十分苦恼keyword,他用这个一招见效"
              << "追踪了10万人，我发现了关于keyword的有趣现象"
              << "为什么现在人都不喜欢keyword了"
              << "这样keyword,听起来不可思议"
              << "坚持keyword的原因竟然是......"
              << "震惊！他竟然这样keyword"
              << "长期这样keyword等于慢性自杀"
              << "为什么越来越多的人关注keyword了"
              << "长期这样keyword，至少少活10年"
              << "坚持长时间keyword的人,你可能\"摊上\"事儿了"
              << "快速搞定keyword"
              << "在一个地方，你可以免费keyword"
              << "做一个最完美的keyword计划"
              << "世界上最糟糕的keyword建议"
              << "10年后，我们不想你还这样keyword"
              << "比keyword更重要的10件事，你知道地越早越好"
              << "100个有用的keyword方法"
              << "最有趣的keyword故事"
              << "你应该学会keyword的5个理由"
              << "1个有创意的keyword方法"
              << "如何计划keyword"
              << "keyword中的真实和谎言"
              << "关于keyword的真相"
              << "每个人都应该知道关于keyword的真实故事"
              << "keyword时，永远不该做这7件事"
              << "keyword时，最危险的事情是什么？"
              << "如何安全地keyword"
              << "摆脱掉你这些keyword的不良习惯"
              << "来自历史的keyword教训，你不要重蹈覆辙";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createTitles(QStringList& titlesList)
{
    for (int i = 0; i < modelList.count(); i++) {
        QString s = modelList[i];
        s = s.replace("keyword", ui->edtKeyWord->text());
        titlesList << s;
    }
}

void MainWindow::on_btnOk_clicked()
{
    QStringList titlesList;
    createTitles(titlesList);
    ui->lvData->clear();
    for (int i = 0; i < titlesList.count(); i++) {
        if (qrand() % 3 != 0) {
            continue;
        }
        QListWidgetItem* item = new QListWidgetItem(ui->lvData);
        item->setSizeHint(QSize(300, 32));
        ui->lvData->addItem(item);
        QLabel* lbl = new QLabel(ui->lvData);
        QFont font = lbl->font();
        font.setFamily("新宋体");
        font.setPointSize(11);
        lbl->setFont(font);
        item->setText(titlesList[i]);
        ui->lvData->setItemWidget(item, lbl);
    }
}

void MainWindow::on_edtKeyWord_returnPressed()
{
    emit ui->btnOk->clicked();
}
