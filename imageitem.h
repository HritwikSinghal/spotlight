#ifndef IMAGEITEM_H
#define IMAGEITEM_H
#include <QString>
#include <QImage>

enum class Source {SRC_BING, SRC_CHROMECAST, SRC_SPOTLIGHT};

class ImageItem
{
public:
    ImageItem(QString title, QString url, QString description, bool portrait, Source src=Source::SRC_SPOTLIGHT);
    ImageItem() { m_url = "";}

    QString title() const;
    QString url() const;
    QString description() const;
    bool    isPortrait() const;
    bool    isDeleted(void);
    void    setSource(Source src);
    void    setImage(QImage img);
    void    setDeleted(int del);

    int     width(void) const;
    int     height(void) const;
    void    setWidth(int width);
    void    setHeight(int height);
    Source  source(void);
    QString filename(void);
    QImage  image(void);

private:
    QString     m_title;
    QString     m_url;
    QString     m_description;
    int         m_width;
    int         m_height;
    int         m_deleted;
    bool        m_portrait;
    QImage      m_img;
    Source      m_src;
};

#endif // IMAGEITEM_H