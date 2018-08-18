#pragma once

#include <QQuickImageProvider>
#include <QImage>
#include <QQuickWindow>
#include <SFML/Graphics/RenderTexture.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class SFMLOffscreen : public QObject {
		Q_OBJECT
	public:
		explicit SFMLOffscreen();
		~SFMLOffscreen();

		Q_INVOKABLE sf::Image renderFrame();
	private:
		sf::RenderTexture  m_render_texture;
		sf::RectangleShape m_shape;
};
